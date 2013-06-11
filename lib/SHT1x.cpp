  


<!DOCTYPE html>
<html>
  <head prefix="og: http://ogp.me/ns# fb: http://ogp.me/ns/fb# githubog: http://ogp.me/ns/fb/githubog#">
    <meta charset='utf-8'>
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
        <title>SHT1x/SHT1x.cpp at master · practicalarduino/SHT1x · GitHub</title>
    <link rel="search" type="application/opensearchdescription+xml" href="/opensearch.xml" title="GitHub" />
    <link rel="fluid-icon" href="https://github.com/fluidicon.png" title="GitHub" />
    <link rel="apple-touch-icon" sizes="57x57" href="/apple-touch-icon-114.png" />
    <link rel="apple-touch-icon" sizes="114x114" href="/apple-touch-icon-114.png" />
    <link rel="apple-touch-icon" sizes="72x72" href="/apple-touch-icon-144.png" />
    <link rel="apple-touch-icon" sizes="144x144" href="/apple-touch-icon-144.png" />
    <link rel="logo" type="image/svg" href="http://github-media-downloads.s3.amazonaws.com/github-logo.svg" />
    <link rel="xhr-socket" href="/_sockets" />


    <meta name="msapplication-TileImage" content="/windows-tile.png" />
    <meta name="msapplication-TileColor" content="#ffffff" />
    <meta name="selected-link" value="repo_source" data-pjax-transient />
    <meta content="collector.githubapp.com" name="octolytics-host" /><meta content="github" name="octolytics-app-id" />

    
    
    <link rel="icon" type="image/x-icon" href="/favicon.ico" />

    <meta content="authenticity_token" name="csrf-param" />
<meta content="MYF4fRaeRfDBhLX/NyUvYDGxgLNz/6qts3LBvaUbxNM=" name="csrf-token" />

    <link href="https://a248.e.akamai.net/assets.github.com/assets/github-d63f89e307e2e357d3b7160b3cd4020463f9bbc1.css" media="all" rel="stylesheet" type="text/css" />
    <link href="https://a248.e.akamai.net/assets.github.com/assets/github2-883c2d036f95a0fb486a5d977a84cb0b91a58353.css" media="all" rel="stylesheet" type="text/css" />
    


      <script src="https://a248.e.akamai.net/assets.github.com/assets/frameworks-92d138f450f2960501e28397a2f63b0f100590f0.js" type="text/javascript"></script>
      <script src="https://a248.e.akamai.net/assets.github.com/assets/github-9514cee43c62b106e5ca1f5cf2107a0c1fad9381.js" type="text/javascript"></script>
      
      <meta http-equiv="x-pjax-version" content="69eecf449c3b66a1c0a67e6f1032684b">

        <link data-pjax-transient rel='permalink' href='/practicalarduino/SHT1x/blob/be7042c3e3cb32c778b9c9ca270b3df57f769ea5/SHT1x.cpp'>
    <meta property="og:title" content="SHT1x"/>
    <meta property="og:type" content="githubog:gitrepository"/>
    <meta property="og:url" content="https://github.com/practicalarduino/SHT1x"/>
    <meta property="og:image" content="https://secure.gravatar.com/avatar/19339561ab1226ffe4afd92be23d6db4?s=420&amp;d=https://a248.e.akamai.net/assets.github.com%2Fimages%2Fgravatars%2Fgravatar-user-420.png"/>
    <meta property="og:site_name" content="GitHub"/>
    <meta property="og:description" content="Arduino library to support SHT1x-series (SHT10, SHT11, SHT15) temperature / humidity sensors from Sensirion"/>
    <meta property="twitter:card" content="summary"/>
    <meta property="twitter:site" content="@GitHub">
    <meta property="twitter:title" content="practicalarduino/SHT1x"/>

    <meta name="description" content="Arduino library to support SHT1x-series (SHT10, SHT11, SHT15) temperature / humidity sensors from Sensirion" />


    <meta content="88147" name="octolytics-dimension-user_id" /><meta content="228354" name="octolytics-dimension-repository_id" />
  <link href="https://github.com/practicalarduino/SHT1x/commits/master.atom" rel="alternate" title="Recent Commits to SHT1x:master" type="application/atom+xml" />

  </head>


  <body class="logged_out page-blob macintosh vis-public env-production  ">
    <div id="wrapper">

      

      
      
      

      
      <div class="header header-logged-out">
  <div class="container clearfix">

    <a class="header-logo-wordmark" href="https://github.com/">Github</a>

    <div class="header-actions">
      <a class="button primary" href="https://github.com/signup">Sign up</a>
      <a class="button" href="https://github.com/login?return_to=%2Fpracticalarduino%2FSHT1x%2Fblob%2Fmaster%2FSHT1x.cpp">Sign in</a>
    </div>

    <div class="command-bar js-command-bar  in-repository">


      <ul class="top-nav">
          <li class="explore"><a href="https://github.com/explore">Explore</a></li>
        <li class="features"><a href="https://github.com/features">Features</a></li>
          <li class="blog"><a href="https://github.com/blog">Blog</a></li>
      </ul>
        <form accept-charset="UTF-8" action="/search" class="command-bar-form" id="top_search_form" method="get">
  <a href="/search/advanced" class="advanced-search-icon tooltipped downwards command-bar-search" id="advanced_search" title="Advanced search"><span class="octicon octicon-gear "></span></a>

  <input type="text" data-hotkey="/ s" name="q" id="js-command-bar-field" placeholder="Search or type a command" tabindex="1" autocapitalize="off"
    
      data-repo="practicalarduino/SHT1x"
      data-branch="master"
      data-sha="0b0f5a4dc315917beb8561eb78c1cb389b6ad232"
  >

    <input type="hidden" name="nwo" value="practicalarduino/SHT1x" />

    <div class="select-menu js-menu-container js-select-menu search-context-select-menu">
      <span class="minibutton select-menu-button js-menu-target">
        <span class="js-select-button">This repository</span>
      </span>

      <div class="select-menu-modal-holder js-menu-content js-navigation-container">
        <div class="select-menu-modal">

          <div class="select-menu-item js-navigation-item selected">
            <span class="select-menu-item-icon octicon octicon-check"></span>
            <input type="radio" class="js-search-this-repository" name="search_target" value="repository" checked="checked" />
            <div class="select-menu-item-text js-select-button-text">This repository</div>
          </div> <!-- /.select-menu-item -->

          <div class="select-menu-item js-navigation-item">
            <span class="select-menu-item-icon octicon octicon-check"></span>
            <input type="radio" name="search_target" value="global" />
            <div class="select-menu-item-text js-select-button-text">All repositories</div>
          </div> <!-- /.select-menu-item -->

        </div>
      </div>
    </div>

  <span class="octicon help tooltipped downwards" title="Show command bar help">
    <span class="octicon octicon-question"></span>
  </span>


  <input type="hidden" name="ref" value="cmdform">

  <div class="divider-vertical"></div>

</form>
    </div>

  </div>
</div>


      

      


            <div class="site hfeed" itemscope itemtype="http://schema.org/WebPage">
      <div class="hentry">
        
        <div class="pagehead repohead instapaper_ignore readability-menu ">
          <div class="container">
            <div class="title-actions-bar">
              

<ul class="pagehead-actions">



    <li>
      <a href="/login?return_to=%2Fpracticalarduino%2FSHT1x"
        class="minibutton js-toggler-target star-button entice tooltipped upwards"
        title="You must be signed in to use this feature" rel="nofollow">
        <span class="octicon octicon-star"></span>Star
      </a>
      <a class="social-count js-social-count" href="/practicalarduino/SHT1x/stargazers">
        42
      </a>
    </li>
    <li>
      <a href="/login?return_to=%2Fpracticalarduino%2FSHT1x"
        class="minibutton js-toggler-target fork-button entice tooltipped upwards"
        title="You must be signed in to fork a repository" rel="nofollow">
        <span class="octicon octicon-git-branch"></span>Fork
      </a>
      <a href="/practicalarduino/SHT1x/network" class="social-count">
        14
      </a>
    </li>
</ul>

              <h1 itemscope itemtype="http://data-vocabulary.org/Breadcrumb" class="entry-title public">
                <span class="repo-label"><span>public</span></span>
                <span class="mega-octicon octicon-repo"></span>
                <span class="author vcard">
                  <a href="/practicalarduino" class="url fn" itemprop="url" rel="author">
                  <span itemprop="title">practicalarduino</span>
                  </a></span> /
                <strong><a href="/practicalarduino/SHT1x" class="js-current-repository">SHT1x</a></strong>
              </h1>
            </div>

            
  <ul class="tabs">
    <li class="pulse-nav"><a href="/practicalarduino/SHT1x/pulse" class="js-selected-navigation-item " data-selected-links="pulse /practicalarduino/SHT1x/pulse" rel="nofollow"><span class="octicon octicon-pulse"></span></a></li>
    <li><a href="/practicalarduino/SHT1x" class="js-selected-navigation-item selected" data-selected-links="repo_source repo_downloads repo_commits repo_tags repo_branches /practicalarduino/SHT1x">Code</a></li>
    <li><a href="/practicalarduino/SHT1x/network" class="js-selected-navigation-item " data-selected-links="repo_network /practicalarduino/SHT1x/network">Network</a></li>
    <li><a href="/practicalarduino/SHT1x/pulls" class="js-selected-navigation-item " data-selected-links="repo_pulls /practicalarduino/SHT1x/pulls">Pull Requests <span class='counter'>1</span></a></li>

      <li><a href="/practicalarduino/SHT1x/issues" class="js-selected-navigation-item " data-selected-links="repo_issues /practicalarduino/SHT1x/issues">Issues <span class='counter'>6</span></a></li>



    <li><a href="/practicalarduino/SHT1x/graphs" class="js-selected-navigation-item " data-selected-links="repo_graphs repo_contributors /practicalarduino/SHT1x/graphs">Graphs</a></li>


  </ul>
  
<div class="tabnav">

  <span class="tabnav-right">
    <ul class="tabnav-tabs">
          <li><a href="/practicalarduino/SHT1x/tags" class="js-selected-navigation-item tabnav-tab" data-selected-links="repo_tags /practicalarduino/SHT1x/tags">Tags <span class="counter blank">0</span></a></li>
    </ul>
  </span>

  <div class="tabnav-widget scope">


    <div class="select-menu js-menu-container js-select-menu js-branch-menu">
      <a class="minibutton select-menu-button js-menu-target" data-hotkey="w" data-ref="master">
        <span class="octicon octicon-branch"></span>
        <i>branch:</i>
        <span class="js-select-button">master</span>
      </a>

      <div class="select-menu-modal-holder js-menu-content js-navigation-container">

        <div class="select-menu-modal">
          <div class="select-menu-header">
            <span class="select-menu-title">Switch branches/tags</span>
            <span class="octicon octicon-remove-close js-menu-close"></span>
          </div> <!-- /.select-menu-header -->

          <div class="select-menu-filters">
            <div class="select-menu-text-filter">
              <input type="text" id="commitish-filter-field" class="js-filterable-field js-navigation-enable" placeholder="Filter branches/tags">
            </div>
            <div class="select-menu-tabs">
              <ul>
                <li class="select-menu-tab">
                  <a href="#" data-tab-filter="branches" class="js-select-menu-tab">Branches</a>
                </li>
                <li class="select-menu-tab">
                  <a href="#" data-tab-filter="tags" class="js-select-menu-tab">Tags</a>
                </li>
              </ul>
            </div><!-- /.select-menu-tabs -->
          </div><!-- /.select-menu-filters -->

          <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket css-truncate" data-tab-filter="branches">

            <div data-filterable-for="commitish-filter-field" data-filterable-type="substring">

                <div class="select-menu-item js-navigation-item selected">
                  <span class="select-menu-item-icon octicon octicon-check"></span>
                  <a href="/practicalarduino/SHT1x/blob/master/SHT1x.cpp" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="master" rel="nofollow" title="master">master</a>
                </div> <!-- /.select-menu-item -->
            </div>

              <div class="select-menu-no-results">Nothing to show</div>
          </div> <!-- /.select-menu-list -->


          <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket css-truncate" data-tab-filter="tags">
            <div data-filterable-for="commitish-filter-field" data-filterable-type="substring">

            </div>

            <div class="select-menu-no-results">Nothing to show</div>

          </div> <!-- /.select-menu-list -->

        </div> <!-- /.select-menu-modal -->
      </div> <!-- /.select-menu-modal-holder -->
    </div> <!-- /.select-menu -->

  </div> <!-- /.scope -->

  <ul class="tabnav-tabs">
    <li><a href="/practicalarduino/SHT1x" class="selected js-selected-navigation-item tabnav-tab" data-selected-links="repo_source /practicalarduino/SHT1x">Files</a></li>
    <li><a href="/practicalarduino/SHT1x/commits/master" class="js-selected-navigation-item tabnav-tab" data-selected-links="repo_commits /practicalarduino/SHT1x/commits/master">Commits</a></li>
    <li><a href="/practicalarduino/SHT1x/branches" class="js-selected-navigation-item tabnav-tab" data-selected-links="repo_branches /practicalarduino/SHT1x/branches" rel="nofollow">Branches <span class="counter ">1</span></a></li>
  </ul>

</div>

  
  
  


            
          </div>
        </div><!-- /.repohead -->

        <div id="js-repo-pjax-container" class="container context-loader-container" data-pjax-container>
          


<!-- blob contrib key: blob_contributors:v21:80ef9ae1cc2e1e01308e2bc1a423d3fb -->
<!-- blob contrib frag key: views10/v8/blob_contributors:v21:80ef9ae1cc2e1e01308e2bc1a423d3fb -->


<div id="slider">
    <div class="frame-meta">

      <p title="This is a placeholder element" class="js-history-link-replace hidden"></p>

        <div class="breadcrumb">
          <span class='bold'><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/practicalarduino/SHT1x" class="js-slide-to" data-branch="master" data-direction="back" itemscope="url"><span itemprop="title">SHT1x</span></a></span></span><span class="separator"> / </span><strong class="final-path">SHT1x.cpp</strong> <span class="js-zeroclipboard zeroclipboard-button" data-clipboard-text="SHT1x.cpp" data-copied-hint="copied!" title="copy to clipboard"><span class="octicon octicon-clippy"></span></span>
        </div>

      <a href="/practicalarduino/SHT1x/find/master" class="js-slide-to" data-hotkey="t" style="display:none">Show File Finder</a>


        
  <div class="commit file-history-tease">
    <img class="main-avatar" height="24" src="https://secure.gravatar.com/avatar/f9a57bbd245f3e911791200b1842fdfd?s=140&amp;d=https://a248.e.akamai.net/assets.github.com%2Fimages%2Fgravatars%2Fgravatar-user-420.png" width="24" />
    <span class="author"><a href="/jonoxer" rel="author">jonoxer</a></span>
    <time class="js-relative-date" datetime="2011-09-19T20:56:23-07:00" title="2011-09-19 20:56:23">September 19, 2011</time>
    <div class="commit-title">
        <a href="/practicalarduino/SHT1x/commit/be7042c3e3cb32c778b9c9ca270b3df57f769ea5" class="message">Conditionally include Arduino.h for Arduino 1.0 compatibility</a>
    </div>

    <div class="participation">
      <p class="quickstat"><a href="#blob_contributors_box" rel="facebox"><strong>1</strong> contributor</a></p>
      
    </div>
    <div id="blob_contributors_box" style="display:none">
      <h2>Users on GitHub who have contributed to this file</h2>
      <ul class="facebox-user-list">
        <li>
          <img height="24" src="https://secure.gravatar.com/avatar/f9a57bbd245f3e911791200b1842fdfd?s=140&amp;d=https://a248.e.akamai.net/assets.github.com%2Fimages%2Fgravatars%2Fgravatar-user-420.png" width="24" />
          <a href="/jonoxer">jonoxer</a>
        </li>
      </ul>
    </div>
  </div>


    </div><!-- ./.frame-meta -->

    <div class="frames">
      <div class="frame" data-permalink-url="/practicalarduino/SHT1x/blob/be7042c3e3cb32c778b9c9ca270b3df57f769ea5/SHT1x.cpp" data-title="SHT1x/SHT1x.cpp at master · practicalarduino/SHT1x · GitHub" data-type="blob">

        <div id="files" class="bubble">
          <div class="file">
            <div class="meta">
              <div class="info">
                <span class="icon"><b class="octicon octicon-file-text"></b></span>
                <span class="mode" title="File Mode">file</span>
                  <span>244 lines (196 sloc)</span>
                <span>5.815 kb</span>
              </div>
              <div class="actions">
                <div class="button-group">
                      <a class="minibutton js-entice" href=""
                         data-entice="You must be signed in and on a branch to make or propose changes">Edit</a>
                  <a href="/practicalarduino/SHT1x/raw/master/SHT1x.cpp" class="button minibutton " id="raw-url">Raw</a>
                    <a href="/practicalarduino/SHT1x/blame/master/SHT1x.cpp" class="button minibutton ">Blame</a>
                  <a href="/practicalarduino/SHT1x/commits/master/SHT1x.cpp" class="button minibutton " rel="nofollow">History</a>
                </div><!-- /.button-group -->
              </div><!-- /.actions -->

            </div>
                <div class="blob-wrapper data type-c js-blob-data">
      <table class="file-code file-blob">
        <tr class="file-code-line">
          <td class="blob-line-nums">
            <span id="L1" rel="#L1">1</span>
<span id="L2" rel="#L2">2</span>
<span id="L3" rel="#L3">3</span>
<span id="L4" rel="#L4">4</span>
<span id="L5" rel="#L5">5</span>
<span id="L6" rel="#L6">6</span>
<span id="L7" rel="#L7">7</span>
<span id="L8" rel="#L8">8</span>
<span id="L9" rel="#L9">9</span>
<span id="L10" rel="#L10">10</span>
<span id="L11" rel="#L11">11</span>
<span id="L12" rel="#L12">12</span>
<span id="L13" rel="#L13">13</span>
<span id="L14" rel="#L14">14</span>
<span id="L15" rel="#L15">15</span>
<span id="L16" rel="#L16">16</span>
<span id="L17" rel="#L17">17</span>
<span id="L18" rel="#L18">18</span>
<span id="L19" rel="#L19">19</span>
<span id="L20" rel="#L20">20</span>
<span id="L21" rel="#L21">21</span>
<span id="L22" rel="#L22">22</span>
<span id="L23" rel="#L23">23</span>
<span id="L24" rel="#L24">24</span>
<span id="L25" rel="#L25">25</span>
<span id="L26" rel="#L26">26</span>
<span id="L27" rel="#L27">27</span>
<span id="L28" rel="#L28">28</span>
<span id="L29" rel="#L29">29</span>
<span id="L30" rel="#L30">30</span>
<span id="L31" rel="#L31">31</span>
<span id="L32" rel="#L32">32</span>
<span id="L33" rel="#L33">33</span>
<span id="L34" rel="#L34">34</span>
<span id="L35" rel="#L35">35</span>
<span id="L36" rel="#L36">36</span>
<span id="L37" rel="#L37">37</span>
<span id="L38" rel="#L38">38</span>
<span id="L39" rel="#L39">39</span>
<span id="L40" rel="#L40">40</span>
<span id="L41" rel="#L41">41</span>
<span id="L42" rel="#L42">42</span>
<span id="L43" rel="#L43">43</span>
<span id="L44" rel="#L44">44</span>
<span id="L45" rel="#L45">45</span>
<span id="L46" rel="#L46">46</span>
<span id="L47" rel="#L47">47</span>
<span id="L48" rel="#L48">48</span>
<span id="L49" rel="#L49">49</span>
<span id="L50" rel="#L50">50</span>
<span id="L51" rel="#L51">51</span>
<span id="L52" rel="#L52">52</span>
<span id="L53" rel="#L53">53</span>
<span id="L54" rel="#L54">54</span>
<span id="L55" rel="#L55">55</span>
<span id="L56" rel="#L56">56</span>
<span id="L57" rel="#L57">57</span>
<span id="L58" rel="#L58">58</span>
<span id="L59" rel="#L59">59</span>
<span id="L60" rel="#L60">60</span>
<span id="L61" rel="#L61">61</span>
<span id="L62" rel="#L62">62</span>
<span id="L63" rel="#L63">63</span>
<span id="L64" rel="#L64">64</span>
<span id="L65" rel="#L65">65</span>
<span id="L66" rel="#L66">66</span>
<span id="L67" rel="#L67">67</span>
<span id="L68" rel="#L68">68</span>
<span id="L69" rel="#L69">69</span>
<span id="L70" rel="#L70">70</span>
<span id="L71" rel="#L71">71</span>
<span id="L72" rel="#L72">72</span>
<span id="L73" rel="#L73">73</span>
<span id="L74" rel="#L74">74</span>
<span id="L75" rel="#L75">75</span>
<span id="L76" rel="#L76">76</span>
<span id="L77" rel="#L77">77</span>
<span id="L78" rel="#L78">78</span>
<span id="L79" rel="#L79">79</span>
<span id="L80" rel="#L80">80</span>
<span id="L81" rel="#L81">81</span>
<span id="L82" rel="#L82">82</span>
<span id="L83" rel="#L83">83</span>
<span id="L84" rel="#L84">84</span>
<span id="L85" rel="#L85">85</span>
<span id="L86" rel="#L86">86</span>
<span id="L87" rel="#L87">87</span>
<span id="L88" rel="#L88">88</span>
<span id="L89" rel="#L89">89</span>
<span id="L90" rel="#L90">90</span>
<span id="L91" rel="#L91">91</span>
<span id="L92" rel="#L92">92</span>
<span id="L93" rel="#L93">93</span>
<span id="L94" rel="#L94">94</span>
<span id="L95" rel="#L95">95</span>
<span id="L96" rel="#L96">96</span>
<span id="L97" rel="#L97">97</span>
<span id="L98" rel="#L98">98</span>
<span id="L99" rel="#L99">99</span>
<span id="L100" rel="#L100">100</span>
<span id="L101" rel="#L101">101</span>
<span id="L102" rel="#L102">102</span>
<span id="L103" rel="#L103">103</span>
<span id="L104" rel="#L104">104</span>
<span id="L105" rel="#L105">105</span>
<span id="L106" rel="#L106">106</span>
<span id="L107" rel="#L107">107</span>
<span id="L108" rel="#L108">108</span>
<span id="L109" rel="#L109">109</span>
<span id="L110" rel="#L110">110</span>
<span id="L111" rel="#L111">111</span>
<span id="L112" rel="#L112">112</span>
<span id="L113" rel="#L113">113</span>
<span id="L114" rel="#L114">114</span>
<span id="L115" rel="#L115">115</span>
<span id="L116" rel="#L116">116</span>
<span id="L117" rel="#L117">117</span>
<span id="L118" rel="#L118">118</span>
<span id="L119" rel="#L119">119</span>
<span id="L120" rel="#L120">120</span>
<span id="L121" rel="#L121">121</span>
<span id="L122" rel="#L122">122</span>
<span id="L123" rel="#L123">123</span>
<span id="L124" rel="#L124">124</span>
<span id="L125" rel="#L125">125</span>
<span id="L126" rel="#L126">126</span>
<span id="L127" rel="#L127">127</span>
<span id="L128" rel="#L128">128</span>
<span id="L129" rel="#L129">129</span>
<span id="L130" rel="#L130">130</span>
<span id="L131" rel="#L131">131</span>
<span id="L132" rel="#L132">132</span>
<span id="L133" rel="#L133">133</span>
<span id="L134" rel="#L134">134</span>
<span id="L135" rel="#L135">135</span>
<span id="L136" rel="#L136">136</span>
<span id="L137" rel="#L137">137</span>
<span id="L138" rel="#L138">138</span>
<span id="L139" rel="#L139">139</span>
<span id="L140" rel="#L140">140</span>
<span id="L141" rel="#L141">141</span>
<span id="L142" rel="#L142">142</span>
<span id="L143" rel="#L143">143</span>
<span id="L144" rel="#L144">144</span>
<span id="L145" rel="#L145">145</span>
<span id="L146" rel="#L146">146</span>
<span id="L147" rel="#L147">147</span>
<span id="L148" rel="#L148">148</span>
<span id="L149" rel="#L149">149</span>
<span id="L150" rel="#L150">150</span>
<span id="L151" rel="#L151">151</span>
<span id="L152" rel="#L152">152</span>
<span id="L153" rel="#L153">153</span>
<span id="L154" rel="#L154">154</span>
<span id="L155" rel="#L155">155</span>
<span id="L156" rel="#L156">156</span>
<span id="L157" rel="#L157">157</span>
<span id="L158" rel="#L158">158</span>
<span id="L159" rel="#L159">159</span>
<span id="L160" rel="#L160">160</span>
<span id="L161" rel="#L161">161</span>
<span id="L162" rel="#L162">162</span>
<span id="L163" rel="#L163">163</span>
<span id="L164" rel="#L164">164</span>
<span id="L165" rel="#L165">165</span>
<span id="L166" rel="#L166">166</span>
<span id="L167" rel="#L167">167</span>
<span id="L168" rel="#L168">168</span>
<span id="L169" rel="#L169">169</span>
<span id="L170" rel="#L170">170</span>
<span id="L171" rel="#L171">171</span>
<span id="L172" rel="#L172">172</span>
<span id="L173" rel="#L173">173</span>
<span id="L174" rel="#L174">174</span>
<span id="L175" rel="#L175">175</span>
<span id="L176" rel="#L176">176</span>
<span id="L177" rel="#L177">177</span>
<span id="L178" rel="#L178">178</span>
<span id="L179" rel="#L179">179</span>
<span id="L180" rel="#L180">180</span>
<span id="L181" rel="#L181">181</span>
<span id="L182" rel="#L182">182</span>
<span id="L183" rel="#L183">183</span>
<span id="L184" rel="#L184">184</span>
<span id="L185" rel="#L185">185</span>
<span id="L186" rel="#L186">186</span>
<span id="L187" rel="#L187">187</span>
<span id="L188" rel="#L188">188</span>
<span id="L189" rel="#L189">189</span>
<span id="L190" rel="#L190">190</span>
<span id="L191" rel="#L191">191</span>
<span id="L192" rel="#L192">192</span>
<span id="L193" rel="#L193">193</span>
<span id="L194" rel="#L194">194</span>
<span id="L195" rel="#L195">195</span>
<span id="L196" rel="#L196">196</span>
<span id="L197" rel="#L197">197</span>
<span id="L198" rel="#L198">198</span>
<span id="L199" rel="#L199">199</span>
<span id="L200" rel="#L200">200</span>
<span id="L201" rel="#L201">201</span>
<span id="L202" rel="#L202">202</span>
<span id="L203" rel="#L203">203</span>
<span id="L204" rel="#L204">204</span>
<span id="L205" rel="#L205">205</span>
<span id="L206" rel="#L206">206</span>
<span id="L207" rel="#L207">207</span>
<span id="L208" rel="#L208">208</span>
<span id="L209" rel="#L209">209</span>
<span id="L210" rel="#L210">210</span>
<span id="L211" rel="#L211">211</span>
<span id="L212" rel="#L212">212</span>
<span id="L213" rel="#L213">213</span>
<span id="L214" rel="#L214">214</span>
<span id="L215" rel="#L215">215</span>
<span id="L216" rel="#L216">216</span>
<span id="L217" rel="#L217">217</span>
<span id="L218" rel="#L218">218</span>
<span id="L219" rel="#L219">219</span>
<span id="L220" rel="#L220">220</span>
<span id="L221" rel="#L221">221</span>
<span id="L222" rel="#L222">222</span>
<span id="L223" rel="#L223">223</span>
<span id="L224" rel="#L224">224</span>
<span id="L225" rel="#L225">225</span>
<span id="L226" rel="#L226">226</span>
<span id="L227" rel="#L227">227</span>
<span id="L228" rel="#L228">228</span>
<span id="L229" rel="#L229">229</span>
<span id="L230" rel="#L230">230</span>
<span id="L231" rel="#L231">231</span>
<span id="L232" rel="#L232">232</span>
<span id="L233" rel="#L233">233</span>
<span id="L234" rel="#L234">234</span>
<span id="L235" rel="#L235">235</span>
<span id="L236" rel="#L236">236</span>
<span id="L237" rel="#L237">237</span>
<span id="L238" rel="#L238">238</span>
<span id="L239" rel="#L239">239</span>
<span id="L240" rel="#L240">240</span>
<span id="L241" rel="#L241">241</span>
<span id="L242" rel="#L242">242</span>
<span id="L243" rel="#L243">243</span>

          </td>
          <td class="blob-line-code">
                  <div class="highlight"><pre><div class='line' id='LC1'><span class="cm">/**</span></div><div class='line' id='LC2'><span class="cm"> * SHT1x Library</span></div><div class='line' id='LC3'><span class="cm"> *</span></div><div class='line' id='LC4'><span class="cm"> * Copyright 2009 Jonathan Oxer &lt;jon@oxer.com.au&gt; / &lt;www.practicalarduino.com&gt;</span></div><div class='line' id='LC5'><span class="cm"> * Based on previous work by:</span></div><div class='line' id='LC6'><span class="cm"> *    Maurice Ribble: &lt;www.glacialwanderer.com/hobbyrobotics/?p=5&gt;</span></div><div class='line' id='LC7'><span class="cm"> *    Wayne ?: &lt;ragingreality.blogspot.com/2008/01/ardunio-and-sht15.html&gt;</span></div><div class='line' id='LC8'><span class="cm"> *</span></div><div class='line' id='LC9'><span class="cm"> * Manages communication with SHT1x series (SHT10, SHT11, SHT15)</span></div><div class='line' id='LC10'><span class="cm"> * temperature / humidity sensors from Sensirion (www.sensirion.com).</span></div><div class='line' id='LC11'><span class="cm"> */</span></div><div class='line' id='LC12'><span class="cp">#if (ARDUINO &gt;= 100)</span></div><div class='line' id='LC13'><span class="cp">#include &lt;Arduino.h&gt;</span></div><div class='line' id='LC14'><span class="cp">#else</span></div><div class='line' id='LC15'><span class="cp">#include &lt;WProgram.h&gt;</span></div><div class='line' id='LC16'><span class="cp">#endif</span></div><div class='line' id='LC17'><br/></div><div class='line' id='LC18'><span class="cp">#include &quot;SHT1x.h&quot;</span></div><div class='line' id='LC19'><br/></div><div class='line' id='LC20'><span class="n">SHT1x</span><span class="o">::</span><span class="n">SHT1x</span><span class="p">(</span><span class="kt">int</span> <span class="n">dataPin</span><span class="p">,</span> <span class="kt">int</span> <span class="n">clockPin</span><span class="p">)</span></div><div class='line' id='LC21'><span class="p">{</span></div><div class='line' id='LC22'>&nbsp;&nbsp;<span class="n">_dataPin</span> <span class="o">=</span> <span class="n">dataPin</span><span class="p">;</span></div><div class='line' id='LC23'>&nbsp;&nbsp;<span class="n">_clockPin</span> <span class="o">=</span> <span class="n">clockPin</span><span class="p">;</span></div><div class='line' id='LC24'><span class="p">}</span></div><div class='line' id='LC25'><br/></div><div class='line' id='LC26'><br/></div><div class='line' id='LC27'><span class="cm">/* ================  Public methods ================ */</span></div><div class='line' id='LC28'><br/></div><div class='line' id='LC29'><span class="cm">/**</span></div><div class='line' id='LC30'><span class="cm"> * Reads the current temperature in degrees Celsius</span></div><div class='line' id='LC31'><span class="cm"> */</span></div><div class='line' id='LC32'><span class="kt">float</span> <span class="n">SHT1x</span><span class="o">::</span><span class="n">readTemperatureC</span><span class="p">()</span></div><div class='line' id='LC33'><span class="p">{</span></div><div class='line' id='LC34'>&nbsp;&nbsp;<span class="kt">int</span> <span class="n">_val</span><span class="p">;</span>                <span class="c1">// Raw value returned from sensor</span></div><div class='line' id='LC35'>&nbsp;&nbsp;<span class="kt">float</span> <span class="n">_temperature</span><span class="p">;</span>      <span class="c1">// Temperature derived from raw value</span></div><div class='line' id='LC36'><br/></div><div class='line' id='LC37'>&nbsp;&nbsp;<span class="c1">// Conversion coefficients from SHT15 datasheet</span></div><div class='line' id='LC38'>&nbsp;&nbsp;<span class="k">const</span> <span class="kt">float</span> <span class="n">D1</span> <span class="o">=</span> <span class="o">-</span><span class="mf">40.0</span><span class="p">;</span>  <span class="c1">// for 14 Bit @ 5V</span></div><div class='line' id='LC39'>&nbsp;&nbsp;<span class="k">const</span> <span class="kt">float</span> <span class="n">D2</span> <span class="o">=</span>   <span class="mf">0.01</span><span class="p">;</span> <span class="c1">// for 14 Bit DEGC</span></div><div class='line' id='LC40'><br/></div><div class='line' id='LC41'>&nbsp;&nbsp;<span class="c1">// Fetch raw value</span></div><div class='line' id='LC42'>&nbsp;&nbsp;<span class="n">_val</span> <span class="o">=</span> <span class="n">readTemperatureRaw</span><span class="p">();</span></div><div class='line' id='LC43'><br/></div><div class='line' id='LC44'>&nbsp;&nbsp;<span class="c1">// Convert raw value to degrees Celsius</span></div><div class='line' id='LC45'>&nbsp;&nbsp;<span class="n">_temperature</span> <span class="o">=</span> <span class="p">(</span><span class="n">_val</span> <span class="o">*</span> <span class="n">D2</span><span class="p">)</span> <span class="o">+</span> <span class="n">D1</span><span class="p">;</span></div><div class='line' id='LC46'><br/></div><div class='line' id='LC47'>&nbsp;&nbsp;<span class="k">return</span> <span class="p">(</span><span class="n">_temperature</span><span class="p">);</span></div><div class='line' id='LC48'><span class="p">}</span></div><div class='line' id='LC49'><br/></div><div class='line' id='LC50'><span class="cm">/**</span></div><div class='line' id='LC51'><span class="cm"> * Reads the current temperature in degrees Fahrenheit</span></div><div class='line' id='LC52'><span class="cm"> */</span></div><div class='line' id='LC53'><span class="kt">float</span> <span class="n">SHT1x</span><span class="o">::</span><span class="n">readTemperatureF</span><span class="p">()</span></div><div class='line' id='LC54'><span class="p">{</span></div><div class='line' id='LC55'>&nbsp;&nbsp;<span class="kt">int</span> <span class="n">_val</span><span class="p">;</span>                 <span class="c1">// Raw value returned from sensor</span></div><div class='line' id='LC56'>&nbsp;&nbsp;<span class="kt">float</span> <span class="n">_temperature</span><span class="p">;</span>       <span class="c1">// Temperature derived from raw value</span></div><div class='line' id='LC57'><br/></div><div class='line' id='LC58'>&nbsp;&nbsp;<span class="c1">// Conversion coefficients from SHT15 datasheet</span></div><div class='line' id='LC59'>&nbsp;&nbsp;<span class="k">const</span> <span class="kt">float</span> <span class="n">D1</span> <span class="o">=</span> <span class="o">-</span><span class="mf">40.0</span><span class="p">;</span>   <span class="c1">// for 14 Bit @ 5V</span></div><div class='line' id='LC60'>&nbsp;&nbsp;<span class="k">const</span> <span class="kt">float</span> <span class="n">D2</span> <span class="o">=</span>   <span class="mf">0.018</span><span class="p">;</span> <span class="c1">// for 14 Bit DEGF</span></div><div class='line' id='LC61'><br/></div><div class='line' id='LC62'>&nbsp;&nbsp;<span class="c1">// Fetch raw value</span></div><div class='line' id='LC63'>&nbsp;&nbsp;<span class="n">_val</span> <span class="o">=</span> <span class="n">readTemperatureRaw</span><span class="p">();</span></div><div class='line' id='LC64'><br/></div><div class='line' id='LC65'>&nbsp;&nbsp;<span class="c1">// Convert raw value to degrees Fahrenheit</span></div><div class='line' id='LC66'>&nbsp;&nbsp;<span class="n">_temperature</span> <span class="o">=</span> <span class="p">(</span><span class="n">_val</span> <span class="o">*</span> <span class="n">D2</span><span class="p">)</span> <span class="o">+</span> <span class="n">D1</span><span class="p">;</span></div><div class='line' id='LC67'><br/></div><div class='line' id='LC68'>&nbsp;&nbsp;<span class="k">return</span> <span class="p">(</span><span class="n">_temperature</span><span class="p">);</span></div><div class='line' id='LC69'><span class="p">}</span></div><div class='line' id='LC70'><br/></div><div class='line' id='LC71'><span class="cm">/**</span></div><div class='line' id='LC72'><span class="cm"> * Reads current temperature-corrected relative humidity</span></div><div class='line' id='LC73'><span class="cm"> */</span></div><div class='line' id='LC74'><span class="kt">float</span> <span class="n">SHT1x</span><span class="o">::</span><span class="n">readHumidity</span><span class="p">()</span></div><div class='line' id='LC75'><span class="p">{</span></div><div class='line' id='LC76'>&nbsp;&nbsp;<span class="kt">int</span> <span class="n">_val</span><span class="p">;</span>                    <span class="c1">// Raw humidity value returned from sensor</span></div><div class='line' id='LC77'>&nbsp;&nbsp;<span class="kt">float</span> <span class="n">_linearHumidity</span><span class="p">;</span>       <span class="c1">// Humidity with linear correction applied</span></div><div class='line' id='LC78'>&nbsp;&nbsp;<span class="kt">float</span> <span class="n">_correctedHumidity</span><span class="p">;</span>    <span class="c1">// Temperature-corrected humidity</span></div><div class='line' id='LC79'>&nbsp;&nbsp;<span class="kt">float</span> <span class="n">_temperature</span><span class="p">;</span>          <span class="c1">// Raw temperature value</span></div><div class='line' id='LC80'><br/></div><div class='line' id='LC81'>&nbsp;&nbsp;<span class="c1">// Conversion coefficients from SHT15 datasheet</span></div><div class='line' id='LC82'>&nbsp;&nbsp;<span class="k">const</span> <span class="kt">float</span> <span class="n">C1</span> <span class="o">=</span> <span class="o">-</span><span class="mf">4.0</span><span class="p">;</span>       <span class="c1">// for 12 Bit</span></div><div class='line' id='LC83'>&nbsp;&nbsp;<span class="k">const</span> <span class="kt">float</span> <span class="n">C2</span> <span class="o">=</span>  <span class="mf">0.0405</span><span class="p">;</span>    <span class="c1">// for 12 Bit</span></div><div class='line' id='LC84'>&nbsp;&nbsp;<span class="k">const</span> <span class="kt">float</span> <span class="n">C3</span> <span class="o">=</span> <span class="o">-</span><span class="mf">0.0000028</span><span class="p">;</span> <span class="c1">// for 12 Bit</span></div><div class='line' id='LC85'>&nbsp;&nbsp;<span class="k">const</span> <span class="kt">float</span> <span class="n">T1</span> <span class="o">=</span>  <span class="mf">0.01</span><span class="p">;</span>      <span class="c1">// for 14 Bit @ 5V</span></div><div class='line' id='LC86'>&nbsp;&nbsp;<span class="k">const</span> <span class="kt">float</span> <span class="n">T2</span> <span class="o">=</span>  <span class="mf">0.00008</span><span class="p">;</span>   <span class="c1">// for 14 Bit @ 5V</span></div><div class='line' id='LC87'><br/></div><div class='line' id='LC88'>&nbsp;&nbsp;<span class="c1">// Command to send to the SHT1x to request humidity</span></div><div class='line' id='LC89'>&nbsp;&nbsp;<span class="kt">int</span> <span class="n">_gHumidCmd</span> <span class="o">=</span> <span class="mi">0</span><span class="n">b00000101</span><span class="p">;</span></div><div class='line' id='LC90'><br/></div><div class='line' id='LC91'>&nbsp;&nbsp;<span class="c1">// Fetch the value from the sensor</span></div><div class='line' id='LC92'>&nbsp;&nbsp;<span class="n">sendCommandSHT</span><span class="p">(</span><span class="n">_gHumidCmd</span><span class="p">,</span> <span class="n">_dataPin</span><span class="p">,</span> <span class="n">_clockPin</span><span class="p">);</span></div><div class='line' id='LC93'>&nbsp;&nbsp;<span class="n">waitForResultSHT</span><span class="p">(</span><span class="n">_dataPin</span><span class="p">);</span></div><div class='line' id='LC94'>&nbsp;&nbsp;<span class="n">_val</span> <span class="o">=</span> <span class="n">getData16SHT</span><span class="p">(</span><span class="n">_dataPin</span><span class="p">,</span> <span class="n">_clockPin</span><span class="p">);</span></div><div class='line' id='LC95'>&nbsp;&nbsp;<span class="n">skipCrcSHT</span><span class="p">(</span><span class="n">_dataPin</span><span class="p">,</span> <span class="n">_clockPin</span><span class="p">);</span></div><div class='line' id='LC96'><br/></div><div class='line' id='LC97'>&nbsp;&nbsp;<span class="c1">// Apply linear conversion to raw value</span></div><div class='line' id='LC98'>&nbsp;&nbsp;<span class="n">_linearHumidity</span> <span class="o">=</span> <span class="n">C1</span> <span class="o">+</span> <span class="n">C2</span> <span class="o">*</span> <span class="n">_val</span> <span class="o">+</span> <span class="n">C3</span> <span class="o">*</span> <span class="n">_val</span> <span class="o">*</span> <span class="n">_val</span><span class="p">;</span></div><div class='line' id='LC99'><br/></div><div class='line' id='LC100'>&nbsp;&nbsp;<span class="c1">// Get current temperature for humidity correction</span></div><div class='line' id='LC101'>&nbsp;&nbsp;<span class="n">_temperature</span> <span class="o">=</span> <span class="n">readTemperatureC</span><span class="p">();</span></div><div class='line' id='LC102'><br/></div><div class='line' id='LC103'>&nbsp;&nbsp;<span class="c1">// Correct humidity value for current temperature</span></div><div class='line' id='LC104'>&nbsp;&nbsp;<span class="n">_correctedHumidity</span> <span class="o">=</span> <span class="p">(</span><span class="n">_temperature</span> <span class="o">-</span> <span class="mf">25.0</span> <span class="p">)</span> <span class="o">*</span> <span class="p">(</span><span class="n">T1</span> <span class="o">+</span> <span class="n">T2</span> <span class="o">*</span> <span class="n">_val</span><span class="p">)</span> <span class="o">+</span> <span class="n">_linearHumidity</span><span class="p">;</span></div><div class='line' id='LC105'><br/></div><div class='line' id='LC106'>&nbsp;&nbsp;<span class="k">return</span> <span class="p">(</span><span class="n">_correctedHumidity</span><span class="p">);</span></div><div class='line' id='LC107'><span class="p">}</span></div><div class='line' id='LC108'><br/></div><div class='line' id='LC109'><br/></div><div class='line' id='LC110'><span class="cm">/* ================  Private methods ================ */</span></div><div class='line' id='LC111'><br/></div><div class='line' id='LC112'><span class="cm">/**</span></div><div class='line' id='LC113'><span class="cm"> * Reads the current raw temperature value</span></div><div class='line' id='LC114'><span class="cm"> */</span></div><div class='line' id='LC115'><span class="kt">float</span> <span class="n">SHT1x</span><span class="o">::</span><span class="n">readTemperatureRaw</span><span class="p">()</span></div><div class='line' id='LC116'><span class="p">{</span></div><div class='line' id='LC117'>&nbsp;&nbsp;<span class="kt">int</span> <span class="n">_val</span><span class="p">;</span></div><div class='line' id='LC118'><br/></div><div class='line' id='LC119'>&nbsp;&nbsp;<span class="c1">// Command to send to the SHT1x to request Temperature</span></div><div class='line' id='LC120'>&nbsp;&nbsp;<span class="kt">int</span> <span class="n">_gTempCmd</span>  <span class="o">=</span> <span class="mi">0</span><span class="n">b00000011</span><span class="p">;</span></div><div class='line' id='LC121'><br/></div><div class='line' id='LC122'>&nbsp;&nbsp;<span class="n">sendCommandSHT</span><span class="p">(</span><span class="n">_gTempCmd</span><span class="p">,</span> <span class="n">_dataPin</span><span class="p">,</span> <span class="n">_clockPin</span><span class="p">);</span></div><div class='line' id='LC123'>&nbsp;&nbsp;<span class="n">waitForResultSHT</span><span class="p">(</span><span class="n">_dataPin</span><span class="p">);</span></div><div class='line' id='LC124'>&nbsp;&nbsp;<span class="n">_val</span> <span class="o">=</span> <span class="n">getData16SHT</span><span class="p">(</span><span class="n">_dataPin</span><span class="p">,</span> <span class="n">_clockPin</span><span class="p">);</span></div><div class='line' id='LC125'>&nbsp;&nbsp;<span class="n">skipCrcSHT</span><span class="p">(</span><span class="n">_dataPin</span><span class="p">,</span> <span class="n">_clockPin</span><span class="p">);</span></div><div class='line' id='LC126'><br/></div><div class='line' id='LC127'>&nbsp;&nbsp;<span class="k">return</span> <span class="p">(</span><span class="n">_val</span><span class="p">);</span></div><div class='line' id='LC128'><span class="p">}</span></div><div class='line' id='LC129'><br/></div><div class='line' id='LC130'><span class="cm">/**</span></div><div class='line' id='LC131'><span class="cm"> */</span></div><div class='line' id='LC132'><span class="kt">int</span> <span class="n">SHT1x</span><span class="o">::</span><span class="n">shiftIn</span><span class="p">(</span><span class="kt">int</span> <span class="n">_dataPin</span><span class="p">,</span> <span class="kt">int</span> <span class="n">_clockPin</span><span class="p">,</span> <span class="kt">int</span> <span class="n">_numBits</span><span class="p">)</span></div><div class='line' id='LC133'><span class="p">{</span></div><div class='line' id='LC134'>&nbsp;&nbsp;<span class="kt">int</span> <span class="n">ret</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC135'>&nbsp;&nbsp;<span class="kt">int</span> <span class="n">i</span><span class="p">;</span></div><div class='line' id='LC136'><br/></div><div class='line' id='LC137'>&nbsp;&nbsp;<span class="k">for</span> <span class="p">(</span><span class="n">i</span><span class="o">=</span><span class="mi">0</span><span class="p">;</span> <span class="n">i</span><span class="o">&lt;</span><span class="n">_numBits</span><span class="p">;</span> <span class="o">++</span><span class="n">i</span><span class="p">)</span></div><div class='line' id='LC138'>&nbsp;&nbsp;<span class="p">{</span></div><div class='line' id='LC139'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">digitalWrite</span><span class="p">(</span><span class="n">_clockPin</span><span class="p">,</span> <span class="n">HIGH</span><span class="p">);</span></div><div class='line' id='LC140'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">delay</span><span class="p">(</span><span class="mi">10</span><span class="p">);</span>  <span class="c1">// I don&#39;t know why I need this, but without it I don&#39;t get my 8 lsb of temp</span></div><div class='line' id='LC141'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">ret</span> <span class="o">=</span> <span class="n">ret</span><span class="o">*</span><span class="mi">2</span> <span class="o">+</span> <span class="n">digitalRead</span><span class="p">(</span><span class="n">_dataPin</span><span class="p">);</span></div><div class='line' id='LC142'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">digitalWrite</span><span class="p">(</span><span class="n">_clockPin</span><span class="p">,</span> <span class="n">LOW</span><span class="p">);</span></div><div class='line' id='LC143'>&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC144'><br/></div><div class='line' id='LC145'>&nbsp;&nbsp;<span class="k">return</span><span class="p">(</span><span class="n">ret</span><span class="p">);</span></div><div class='line' id='LC146'><span class="p">}</span></div><div class='line' id='LC147'><br/></div><div class='line' id='LC148'><span class="cm">/**</span></div><div class='line' id='LC149'><span class="cm"> */</span></div><div class='line' id='LC150'><span class="kt">void</span> <span class="n">SHT1x</span><span class="o">::</span><span class="n">sendCommandSHT</span><span class="p">(</span><span class="kt">int</span> <span class="n">_command</span><span class="p">,</span> <span class="kt">int</span> <span class="n">_dataPin</span><span class="p">,</span> <span class="kt">int</span> <span class="n">_clockPin</span><span class="p">)</span></div><div class='line' id='LC151'><span class="p">{</span></div><div class='line' id='LC152'>&nbsp;&nbsp;<span class="kt">int</span> <span class="n">ack</span><span class="p">;</span></div><div class='line' id='LC153'><br/></div><div class='line' id='LC154'>&nbsp;&nbsp;<span class="c1">// Transmission Start</span></div><div class='line' id='LC155'>&nbsp;&nbsp;<span class="n">pinMode</span><span class="p">(</span><span class="n">_dataPin</span><span class="p">,</span> <span class="n">OUTPUT</span><span class="p">);</span></div><div class='line' id='LC156'>&nbsp;&nbsp;<span class="n">pinMode</span><span class="p">(</span><span class="n">_clockPin</span><span class="p">,</span> <span class="n">OUTPUT</span><span class="p">);</span></div><div class='line' id='LC157'>&nbsp;&nbsp;<span class="n">digitalWrite</span><span class="p">(</span><span class="n">_dataPin</span><span class="p">,</span> <span class="n">HIGH</span><span class="p">);</span></div><div class='line' id='LC158'>&nbsp;&nbsp;<span class="n">digitalWrite</span><span class="p">(</span><span class="n">_clockPin</span><span class="p">,</span> <span class="n">HIGH</span><span class="p">);</span></div><div class='line' id='LC159'>&nbsp;&nbsp;<span class="n">digitalWrite</span><span class="p">(</span><span class="n">_dataPin</span><span class="p">,</span> <span class="n">LOW</span><span class="p">);</span></div><div class='line' id='LC160'>&nbsp;&nbsp;<span class="n">digitalWrite</span><span class="p">(</span><span class="n">_clockPin</span><span class="p">,</span> <span class="n">LOW</span><span class="p">);</span></div><div class='line' id='LC161'>&nbsp;&nbsp;<span class="n">digitalWrite</span><span class="p">(</span><span class="n">_clockPin</span><span class="p">,</span> <span class="n">HIGH</span><span class="p">);</span></div><div class='line' id='LC162'>&nbsp;&nbsp;<span class="n">digitalWrite</span><span class="p">(</span><span class="n">_dataPin</span><span class="p">,</span> <span class="n">HIGH</span><span class="p">);</span></div><div class='line' id='LC163'>&nbsp;&nbsp;<span class="n">digitalWrite</span><span class="p">(</span><span class="n">_clockPin</span><span class="p">,</span> <span class="n">LOW</span><span class="p">);</span></div><div class='line' id='LC164'><br/></div><div class='line' id='LC165'>&nbsp;&nbsp;<span class="c1">// The command (3 msb are address and must be 000, and last 5 bits are command)</span></div><div class='line' id='LC166'>&nbsp;&nbsp;<span class="n">shiftOut</span><span class="p">(</span><span class="n">_dataPin</span><span class="p">,</span> <span class="n">_clockPin</span><span class="p">,</span> <span class="n">MSBFIRST</span><span class="p">,</span> <span class="n">_command</span><span class="p">);</span></div><div class='line' id='LC167'><br/></div><div class='line' id='LC168'>&nbsp;&nbsp;<span class="c1">// Verify we get the correct ack</span></div><div class='line' id='LC169'>&nbsp;&nbsp;<span class="n">digitalWrite</span><span class="p">(</span><span class="n">_clockPin</span><span class="p">,</span> <span class="n">HIGH</span><span class="p">);</span></div><div class='line' id='LC170'>&nbsp;&nbsp;<span class="n">pinMode</span><span class="p">(</span><span class="n">_dataPin</span><span class="p">,</span> <span class="n">INPUT</span><span class="p">);</span></div><div class='line' id='LC171'>&nbsp;&nbsp;<span class="n">ack</span> <span class="o">=</span> <span class="n">digitalRead</span><span class="p">(</span><span class="n">_dataPin</span><span class="p">);</span></div><div class='line' id='LC172'>&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">ack</span> <span class="o">!=</span> <span class="n">LOW</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC173'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">//Serial.println(&quot;Ack Error 0&quot;);</span></div><div class='line' id='LC174'>&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC175'>&nbsp;&nbsp;<span class="n">digitalWrite</span><span class="p">(</span><span class="n">_clockPin</span><span class="p">,</span> <span class="n">LOW</span><span class="p">);</span></div><div class='line' id='LC176'>&nbsp;&nbsp;<span class="n">ack</span> <span class="o">=</span> <span class="n">digitalRead</span><span class="p">(</span><span class="n">_dataPin</span><span class="p">);</span></div><div class='line' id='LC177'>&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">ack</span> <span class="o">!=</span> <span class="n">HIGH</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC178'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">//Serial.println(&quot;Ack Error 1&quot;);</span></div><div class='line' id='LC179'>&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC180'><span class="p">}</span></div><div class='line' id='LC181'><br/></div><div class='line' id='LC182'><span class="cm">/**</span></div><div class='line' id='LC183'><span class="cm"> */</span></div><div class='line' id='LC184'><span class="kt">void</span> <span class="n">SHT1x</span><span class="o">::</span><span class="n">waitForResultSHT</span><span class="p">(</span><span class="kt">int</span> <span class="n">_dataPin</span><span class="p">)</span></div><div class='line' id='LC185'><span class="p">{</span></div><div class='line' id='LC186'>&nbsp;&nbsp;<span class="kt">int</span> <span class="n">i</span><span class="p">;</span></div><div class='line' id='LC187'>&nbsp;&nbsp;<span class="kt">int</span> <span class="n">ack</span><span class="p">;</span></div><div class='line' id='LC188'><br/></div><div class='line' id='LC189'>&nbsp;&nbsp;<span class="n">pinMode</span><span class="p">(</span><span class="n">_dataPin</span><span class="p">,</span> <span class="n">INPUT</span><span class="p">);</span></div><div class='line' id='LC190'><br/></div><div class='line' id='LC191'>&nbsp;&nbsp;<span class="k">for</span><span class="p">(</span><span class="n">i</span><span class="o">=</span> <span class="mi">0</span><span class="p">;</span> <span class="n">i</span> <span class="o">&lt;</span> <span class="mi">100</span><span class="p">;</span> <span class="o">++</span><span class="n">i</span><span class="p">)</span></div><div class='line' id='LC192'>&nbsp;&nbsp;<span class="p">{</span></div><div class='line' id='LC193'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">delay</span><span class="p">(</span><span class="mi">10</span><span class="p">);</span></div><div class='line' id='LC194'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">ack</span> <span class="o">=</span> <span class="n">digitalRead</span><span class="p">(</span><span class="n">_dataPin</span><span class="p">);</span></div><div class='line' id='LC195'><br/></div><div class='line' id='LC196'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">ack</span> <span class="o">==</span> <span class="n">LOW</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC197'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC198'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC199'>&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC200'><br/></div><div class='line' id='LC201'>&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">ack</span> <span class="o">==</span> <span class="n">HIGH</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC202'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">//Serial.println(&quot;Ack Error 2&quot;); // Can&#39;t do serial stuff here, need another way of reporting errors</span></div><div class='line' id='LC203'>&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC204'><span class="p">}</span></div><div class='line' id='LC205'><br/></div><div class='line' id='LC206'><span class="cm">/**</span></div><div class='line' id='LC207'><span class="cm"> */</span></div><div class='line' id='LC208'><span class="kt">int</span> <span class="n">SHT1x</span><span class="o">::</span><span class="n">getData16SHT</span><span class="p">(</span><span class="kt">int</span> <span class="n">_dataPin</span><span class="p">,</span> <span class="kt">int</span> <span class="n">_clockPin</span><span class="p">)</span></div><div class='line' id='LC209'><span class="p">{</span></div><div class='line' id='LC210'>&nbsp;&nbsp;<span class="kt">int</span> <span class="n">val</span><span class="p">;</span></div><div class='line' id='LC211'><br/></div><div class='line' id='LC212'>&nbsp;&nbsp;<span class="c1">// Get the most significant bits</span></div><div class='line' id='LC213'>&nbsp;&nbsp;<span class="n">pinMode</span><span class="p">(</span><span class="n">_dataPin</span><span class="p">,</span> <span class="n">INPUT</span><span class="p">);</span></div><div class='line' id='LC214'>&nbsp;&nbsp;<span class="n">pinMode</span><span class="p">(</span><span class="n">_clockPin</span><span class="p">,</span> <span class="n">OUTPUT</span><span class="p">);</span></div><div class='line' id='LC215'>&nbsp;&nbsp;<span class="n">val</span> <span class="o">=</span> <span class="n">shiftIn</span><span class="p">(</span><span class="n">_dataPin</span><span class="p">,</span> <span class="n">_clockPin</span><span class="p">,</span> <span class="mi">8</span><span class="p">);</span></div><div class='line' id='LC216'>&nbsp;&nbsp;<span class="n">val</span> <span class="o">*=</span> <span class="mi">256</span><span class="p">;</span></div><div class='line' id='LC217'><br/></div><div class='line' id='LC218'>&nbsp;&nbsp;<span class="c1">// Send the required ack</span></div><div class='line' id='LC219'>&nbsp;&nbsp;<span class="n">pinMode</span><span class="p">(</span><span class="n">_dataPin</span><span class="p">,</span> <span class="n">OUTPUT</span><span class="p">);</span></div><div class='line' id='LC220'>&nbsp;&nbsp;<span class="n">digitalWrite</span><span class="p">(</span><span class="n">_dataPin</span><span class="p">,</span> <span class="n">HIGH</span><span class="p">);</span></div><div class='line' id='LC221'>&nbsp;&nbsp;<span class="n">digitalWrite</span><span class="p">(</span><span class="n">_dataPin</span><span class="p">,</span> <span class="n">LOW</span><span class="p">);</span></div><div class='line' id='LC222'>&nbsp;&nbsp;<span class="n">digitalWrite</span><span class="p">(</span><span class="n">_clockPin</span><span class="p">,</span> <span class="n">HIGH</span><span class="p">);</span></div><div class='line' id='LC223'>&nbsp;&nbsp;<span class="n">digitalWrite</span><span class="p">(</span><span class="n">_clockPin</span><span class="p">,</span> <span class="n">LOW</span><span class="p">);</span></div><div class='line' id='LC224'><br/></div><div class='line' id='LC225'>&nbsp;&nbsp;<span class="c1">// Get the least significant bits</span></div><div class='line' id='LC226'>&nbsp;&nbsp;<span class="n">pinMode</span><span class="p">(</span><span class="n">_dataPin</span><span class="p">,</span> <span class="n">INPUT</span><span class="p">);</span></div><div class='line' id='LC227'>&nbsp;&nbsp;<span class="n">val</span> <span class="o">|=</span> <span class="n">shiftIn</span><span class="p">(</span><span class="n">_dataPin</span><span class="p">,</span> <span class="n">_clockPin</span><span class="p">,</span> <span class="mi">8</span><span class="p">);</span></div><div class='line' id='LC228'><br/></div><div class='line' id='LC229'>&nbsp;&nbsp;<span class="k">return</span> <span class="n">val</span><span class="p">;</span></div><div class='line' id='LC230'><span class="p">}</span></div><div class='line' id='LC231'><br/></div><div class='line' id='LC232'><span class="cm">/**</span></div><div class='line' id='LC233'><span class="cm"> */</span></div><div class='line' id='LC234'><span class="kt">void</span> <span class="n">SHT1x</span><span class="o">::</span><span class="n">skipCrcSHT</span><span class="p">(</span><span class="kt">int</span> <span class="n">_dataPin</span><span class="p">,</span> <span class="kt">int</span> <span class="n">_clockPin</span><span class="p">)</span></div><div class='line' id='LC235'><span class="p">{</span></div><div class='line' id='LC236'>&nbsp;&nbsp;<span class="c1">// Skip acknowledge to end trans (no CRC)</span></div><div class='line' id='LC237'>&nbsp;&nbsp;<span class="n">pinMode</span><span class="p">(</span><span class="n">_dataPin</span><span class="p">,</span> <span class="n">OUTPUT</span><span class="p">);</span></div><div class='line' id='LC238'>&nbsp;&nbsp;<span class="n">pinMode</span><span class="p">(</span><span class="n">_clockPin</span><span class="p">,</span> <span class="n">OUTPUT</span><span class="p">);</span></div><div class='line' id='LC239'><br/></div><div class='line' id='LC240'>&nbsp;&nbsp;<span class="n">digitalWrite</span><span class="p">(</span><span class="n">_dataPin</span><span class="p">,</span> <span class="n">HIGH</span><span class="p">);</span></div><div class='line' id='LC241'>&nbsp;&nbsp;<span class="n">digitalWrite</span><span class="p">(</span><span class="n">_clockPin</span><span class="p">,</span> <span class="n">HIGH</span><span class="p">);</span></div><div class='line' id='LC242'>&nbsp;&nbsp;<span class="n">digitalWrite</span><span class="p">(</span><span class="n">_clockPin</span><span class="p">,</span> <span class="n">LOW</span><span class="p">);</span></div><div class='line' id='LC243'><span class="p">}</span></div></pre></div>
          </td>
        </tr>
      </table>
  </div>

          </div>
        </div>

        <a href="#jump-to-line" rel="facebox" data-hotkey="l" class="js-jump-to-line" style="display:none">Jump to Line</a>
        <div id="jump-to-line" style="display:none">
          <h2>Jump to Line</h2>
          <form accept-charset="UTF-8" class="js-jump-to-line-form">
            <input class="textfield js-jump-to-line-field" type="text">
            <div class="full-button">
              <button type="submit" class="button">Go</button>
            </div>
          </form>
        </div>

      </div>
    </div>
</div>

<div id="js-frame-loading-template" class="frame frame-loading large-loading-area" style="display:none;">
  <img class="js-frame-loading-spinner" src="https://a248.e.akamai.net/assets.github.com/images/spinners/octocat-spinner-128.gif?1360648843" height="64" width="64">
</div>


        </div>
      </div>
      <div class="modal-backdrop"></div>
    </div>

      <div id="footer-push"></div><!-- hack for sticky footer -->
    </div><!-- end of wrapper - hack for sticky footer -->

      <!-- footer -->
      <div id="footer">
  <div class="container clearfix">

      <dl class="footer_nav">
        <dt>GitHub</dt>
        <dd><a href="https://github.com/about">About us</a></dd>
        <dd><a href="https://github.com/blog">Blog</a></dd>
        <dd><a href="https://github.com/contact">Contact &amp; support</a></dd>
        <dd><a href="http://enterprise.github.com/">GitHub Enterprise</a></dd>
        <dd><a href="http://status.github.com/">Site status</a></dd>
      </dl>

      <dl class="footer_nav">
        <dt>Applications</dt>
        <dd><a href="http://mac.github.com/">GitHub for Mac</a></dd>
        <dd><a href="http://windows.github.com/">GitHub for Windows</a></dd>
        <dd><a href="http://eclipse.github.com/">GitHub for Eclipse</a></dd>
        <dd><a href="http://mobile.github.com/">GitHub mobile apps</a></dd>
      </dl>

      <dl class="footer_nav">
        <dt>Services</dt>
        <dd><a href="http://get.gaug.es/">Gauges: Web analytics</a></dd>
        <dd><a href="http://speakerdeck.com">Speaker Deck: Presentations</a></dd>
        <dd><a href="https://gist.github.com">Gist: Code snippets</a></dd>
        <dd><a href="http://jobs.github.com/">Job board</a></dd>
      </dl>

      <dl class="footer_nav">
        <dt>Documentation</dt>
        <dd><a href="http://help.github.com/">GitHub Help</a></dd>
        <dd><a href="http://developer.github.com/">Developer API</a></dd>
        <dd><a href="http://github.github.com/github-flavored-markdown/">GitHub Flavored Markdown</a></dd>
        <dd><a href="http://pages.github.com/">GitHub Pages</a></dd>
      </dl>

      <dl class="footer_nav">
        <dt>More</dt>
        <dd><a href="http://training.github.com/">Training</a></dd>
        <dd><a href="https://github.com/edu">Students &amp; teachers</a></dd>
        <dd><a href="http://shop.github.com">The Shop</a></dd>
        <dd><a href="/plans">Plans &amp; pricing</a></dd>
        <dd><a href="http://octodex.github.com/">The Octodex</a></dd>
      </dl>

      <hr class="footer-divider">


    <p class="right">&copy; 2013 <span title="0.04430s from fe3.rs.github.com">GitHub</span>, Inc. All rights reserved.</p>
    <a class="left" href="https://github.com/">
      <span class="mega-octicon octicon-mark-github"></span>
    </a>
    <ul id="legal">
        <li><a href="https://github.com/site/terms">Terms of Service</a></li>
        <li><a href="https://github.com/site/privacy">Privacy</a></li>
        <li><a href="https://github.com/security">Security</a></li>
    </ul>

  </div><!-- /.container -->

</div><!-- /.#footer -->


    <div class="fullscreen-overlay js-fullscreen-overlay" id="fullscreen_overlay">
  <div class="fullscreen-container js-fullscreen-container">
    <div class="textarea-wrap">
      <textarea name="fullscreen-contents" id="fullscreen-contents" class="js-fullscreen-contents" placeholder="" data-suggester="fullscreen_suggester"></textarea>
          <div class="suggester-container">
              <div class="suggester fullscreen-suggester js-navigation-container" id="fullscreen_suggester"
                 data-url="/practicalarduino/SHT1x/suggestions/commit">
              </div>
          </div>
    </div>
  </div>
  <div class="fullscreen-sidebar">
    <a href="#" class="exit-fullscreen js-exit-fullscreen tooltipped leftwards" title="Exit Zen Mode">
      <span class="mega-octicon octicon-screen-normal"></span>
    </a>
    <a href="#" class="theme-switcher js-theme-switcher tooltipped leftwards"
      title="Switch themes">
      <span class="octicon octicon-color-mode"></span>
    </a>
  </div>
</div>



    <div id="ajax-error-message" class="flash flash-error">
      <span class="octicon octicon-alert"></span>
      Something went wrong with that request. Please try again.
      <a href="#" class="octicon octicon-remove-close ajax-error-dismiss"></a>
    </div>

    
    
    <span id='server_response_time' data-time='0.04462' data-host='fe3'></span>
    
  </body>
</html>

