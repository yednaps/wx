// wx130611
// add ports to uno from mega 
// uses ethernet,scp,sht,temt sensors, rain,wspd,wdir
// todo: datalogging, data transfer operation
// bonus: make cleaner with scp lib, getdata fxn for serial output


/*
SCP1000 (parallax board on 5v arduino duelilanova)
code from Conor with fixes by BLP from thread:
( http://www.arduino.cc/cgi-bin/yabb2/YaBB.pl?num=1213217330/5#5 )
uses pins 10, 11, 12 ,13
Must use resistors with 5volt Arduino talking to this 3.3 volt SPI sensor. See:
(http://www.sparkfun.com/commerce/tutorial_info.php?tutorials_id=65)
Parallax SCP1000      Arduino
1   VSS/GND           gnd
2   AVDD              3.3 v
3   TRIG              Connect to gnd if not used
4   DRDY (Int)        n/a
5   DVDD              3.3 V
6   PD                connect to gnd if not used
7   SCLK              pin 13/52 using 10K resistor
8   MOSI              pin 11/51 using 10K resistor
9   MISO              pin 12/50 straight through (no resistor needed)
10  CSB               pin 10/53 using 1K with 10K 3.3v pull up from
                        sensor side of 1K
*/

#include <SHT1x.h>
//#include <Ethernet.h>
#include <SPI.h>

// assign a MAC address for the ethernet controller.
// fill in your address here:
//byte mac[] = {0xDE, 0xAD, 0xBE, 0xEF, 0xFE, 0xED};
// assign an IP address for the controller:
//IPAddress ip(192,168,2,20);
//IPAddress gateway(192,168,2,1); 
//IPAddress subnet(255, 255, 255, 0);
// Initialize the Ethernet server library
// with the IP address and port you want to use 
// (port 80 is default for HTTP):
//EthernetServer server(80);

// Specify data and clock connections and instantiate SHT1x object
#define dataPin  8
#define clockPin 9
SHT1x sht1x(dataPin, clockPin);
 
// define spi bus pins
#define SLAVESELECT 10
#define SPICLOCK 13
#define DATAOUT 11  //MOSI
#define DATAIN 12    //MISO
#define UBLB(a,b)  ( ( (a) << 8) | (b) )
#define UBLB19(a,b) ( ( (a) << 16 ) | (b) )
 
//Addresses
#define REVID 0x00  //ASIC Revision Number
#define OPSTATUS 0x04   //Operation Status
#define STATUS 0x07     //ASIC Status
#define START 0x0A      //Constant Readings
#define PRESSURE 0x1F   //Pressure 3 MSB
#define PRESSURE_LSB 0x20 //Pressure 16 LSB
#define TEMP 0x21       //16 bit temp

// SHT15 variables
float temp_c;
float temp_f;
float humidity;
int luz;

// SCP1000 variables 
char rev_in_byte;
int temp_in;
unsigned long pressure_lsb;
unsigned long pressure_msb;
unsigned long temp_pressure;
unsigned long pressure;

float temperature = 0.0;
//long pressure = 0;
long lastReadingTime = 0;

//*********************************************************************/
// wind and ppt sensors
#define uint  unsigned int
#define ulong unsigned long

#define PIN_ANEMOMETER  2     // Digital 2
#define PIN_VANE        5     // Analog 5

// How often we want to calculate wind speed or direction
#define MSECS_CALC_WIND_SPEED 5000
#define MSECS_CALC_WIND_DIR   5000

volatile int numRevsAnemometer = 0; // Incremented in the interrupt
ulong nextCalcSpeed;                // When we next calc the wind speed
ulong nextCalcDir;                  // When we next calc the direction
ulong time;                         // Millis() at each start of loop().
int wspd;
int wdir;

// ADC readings:
#define NUMDIRS 8
ulong   adc[NUMDIRS] = {26, 45, 77, 118, 161, 196, 220, 256};

// These directions match 1-for-1 with the values in adc, but
// will have to be adjusted as noted above. Modify 'dirOffset'
// to which direction is 'away' (it's West here).
int strVals[NUMDIRS] = {1,2,3,4,5,6,7,8};
byte dirOffset=0;

 
void setup()
{
//  SPI.begin();
  
   // start the Ethernet connection and the server:
//  Ethernet.begin(mac, ip);
//  server.begin();
  
  byte clr;
  pinMode(DATAOUT, OUTPUT);
  pinMode(DATAIN, INPUT);
  pinMode(SPICLOCK,OUTPUT);
  pinMode(SLAVESELECT,OUTPUT);
  digitalWrite(SLAVESELECT,HIGH); //disable device
  
  pinMode(PIN_ANEMOMETER, INPUT);
  digitalWrite(PIN_ANEMOMETER, HIGH);
  attachInterrupt(0, countAnemometer, FALLING);
  nextCalcSpeed = millis() + MSECS_CALC_WIND_SPEED;
  nextCalcDir   = millis() + MSECS_CALC_WIND_DIR;
  
  SPCR = B01010011; //MPIE=0, SPE=1 (on), DORD=0 (MSB first), MSTR=1 (master), CPOL=0 (clock idle when low), CPHA=0 (samples MOSI on rising edge), SPR1=0 & SPR0=0 (500kHz)
  clr=SPSR;
  clr=SPDR;
  delay(10);
  Serial.begin(9600);
  delay(500);
 
  Serial.println("Initialize High Speed Constant Reading Mode");
  write_register(0x03,0x09);
}
 
void loop()
{
  time = millis();

/*  
  if (time >= nextCalcSpeed) {
     calcWindSpeed();
     nextCalcSpeed = time + MSECS_CALC_WIND_SPEED;
  }
  if (time >= nextCalcDir) {
     calcWindDir();
     nextCalcDir = time + MSECS_CALC_WIND_DIR;
  }
*/  
  if (millis() - lastReadingTime > 5000){
    lastReadingTime = millis();
  
    luz = analogRead(A1);
    
    //  temp_c = sht1x.readTemperatureC();
    temp_f = sht1x.readTemperatureF();
    humidity = sht1x.readHumidity();  
  
    // Print the values to the serial port

    wspd = calcWindSpeed();
    wdir = calcWindDir();
    
    rev_in_byte = read_register(REVID);
   
    pressure_msb = read_register(PRESSURE);
    pressure_msb &= B00000111;
    pressure_lsb = read_register16(PRESSURE_LSB);
    pressure_lsb &= 0x0000FFFF;  // this is BLP's fix
    pressure = UBLB19(pressure_msb, pressure_lsb);
    pressure /= 4;
   
  
   
  /*  Serial.print("PRESSURE (Atm)[");
    float pAtm=float(pressure)/101325.0;
    Serial.print(pAtm, 3);
    Serial.println("]");
  */ 
    Serial.print("Temp F \t\t[");
  //  Serial.print(temp_c);
  //  Serial.print("C / ");
    Serial.print(temp_f);
    Serial.println("]");
    temp_in = read_register16(TEMP);
    float tempC = float(temp_in)/20.0; // use 20 by the spec sheet - my board seems closer to 19
  //  Serial.print("TEMP C [");
  //  Serial.print(tempC , 0);  Serial.println("]");
    float tempF = tempC*1.8 + 32;
  //  Serial.print("Temp2 F \t[");
  //  Serial.print(tempF , 0);  Serial.println("]");
  
    Serial.print("Humidity % \t[");
    Serial.print(humidity);
    Serial.println("]");
  
    Serial.print("Dewpoint F \t[");
    Serial.print(temp_f - ((100.0 - humidity) / 5));
    Serial.println("]");
    
    Serial.print("Pressure (hPa) \t[");
    Serial.print(float(pressure)/100.0);
    Serial.println("]");
  
    Serial.print("Light ? \t[");
    Serial.print(luz);
    Serial.println("]");
    
    Serial.print("Wind Speed mph \t[");
    Serial.print(float(wspd)/10.0);
    Serial.println("]");
    
    Serial.print("Wind Dir   \t[");
    Serial.print(wdir);
    Serial.println("]");
    
    Serial.println("--------------------------");
  //  delay(2500);
  }
//  listenForEthernetClients();
}
 
char spi_transfer(volatile char data)
{
  SPDR = data;            // Start the transmission
  while (!(SPSR & (1<<SPIF)))     // Wait for the end of the transmission
  {
  };
  return SPDR;            // return the received byte
}
 
char read_register(char register_name)
{
    char in_byte;
    register_name <<= 2;
    register_name &= B11111100; //Read command
 
    digitalWrite(SLAVESELECT,LOW); //Select SPI Device
    spi_transfer(register_name); //Write byte to device
    in_byte = spi_transfer(0x00); //Send nothing, but we should get back the register value
    digitalWrite(SLAVESELECT,HIGH);
    delay(10);
    return(in_byte);
 
}
 
unsigned long read_register16(char register_name)
{
    byte in_byte1;
    byte in_byte2;
    float in_word;
 
    register_name <<= 2;
    register_name &= B11111100; //Read command
 
    digitalWrite(SLAVESELECT,LOW); //Select SPI Device
    spi_transfer(register_name); //Write byte to device
    in_byte1 = spi_transfer(0x00);
    in_byte2 = spi_transfer(0x00);
    digitalWrite(SLAVESELECT,HIGH);
    in_word = UBLB(in_byte1,in_byte2);
    return(in_word);
}
 
void write_register(char register_name, char register_value)
{
    register_name <<= 2;
    register_name |= B00000010; //Write command
 
    digitalWrite(SLAVESELECT,LOW); //Select SPI device
    spi_transfer(register_name); //Send register location
    spi_transfer(register_value); //Send value to record into register
    digitalWrite(SLAVESELECT,HIGH);
}
/*
void listenForEthernetClients() {
  // listen for incoming clients
  EthernetClient client = server.available();
  if (client) {
    Serial.println("Got a client");
    // an http request ends with a blank line
    boolean currentLineIsBlank = true;
    while (client.connected()) {
      if (client.available()) {
        char c = client.read();
        // if you've gotten to the end of the line (received a newline
        // character) and the line is blank, the http request has ended,
        // so you can send a reply
        if (c == '\n' && currentLineIsBlank) {
          // send a standard http response header
          client.println("HTTP/1.1 200 OK");
          client.println("Content-Type: text/html");
          client.println();
          // print the current readings, in HTML format:
          client.print("Temperature: ");
          client.print(temp_f);
          client.print(" degF");
          client.println("<br />");
          client.print("Humidity: ");
          client.print(humidity);
          client.print(" %");
          client.println("<br />");
          client.print("Pressure: ");
          client.print(pressure/100);
          client.print(" hPa");
          client.println("<br />");  
          break;
        }
        if (c == '\n') {
          // you're starting a new line
          currentLineIsBlank = true;
        } 
        else if (c != '\r') {
          // you've gotten a character on the current line
          currentLineIsBlank = false;
        }
      }
    }
    // give the web browser time to receive the data
    delay(1);
    // close the connection:
    client.stop();
  }
} 
*/
//=======================================================
// Interrupt handler for anemometer. Called each time the reed
// switch triggers (one revolution).
//=======================================================
void countAnemometer() {
   numRevsAnemometer++;
}

//=======================================================
// Find vane direction.
//=======================================================
int calcWindDir() {
   int val;
   byte x, reading;

   val = analogRead(PIN_VANE);
   val >>=2;                        // Shift to 255 range
   reading = val;

   // Look the reading up in directions table. Find the first value
   // that's >= to what we got.
   for (x=0; x<NUMDIRS; x++) {
      if (adc[x] >= reading)
         break;
   }
   //Serial.println(reading, DEC);
   x = (x + dirOffset) % 8;   // Adjust for orientation
//   Serial.print("  Dir: ");
//   Serial.println(strVals[x]);
   return strVals[x];
}


//=======================================================
// Calculate the wind speed, and display it (or log it, whatever).
// 1 rev/sec = 1.492 mph
//=======================================================
int calcWindSpeed() {
   int x, iSpeed;
   // This will produce mph * 10
   // (didn't calc right when done as one statement)
   long speed = 14920;
   speed *= numRevsAnemometer;
   speed /= MSECS_CALC_WIND_SPEED;
   iSpeed = speed;         // Need this for formatting below
/*
   Serial.print("Wind speed: ");
   x = iSpeed / 10;
   Serial.print(x);
   Serial.print('.');
   x = iSpeed % 10;
   Serial.print(x);
*/
   numRevsAnemometer = 0;        // Reset counter
   return iSpeed;
}
