/* 
	Theme Name:Loostrive
	Theme URL:http://www.loome.net/wordpress-theme/loostrive/
	Description:Loostrive主题是是一款功能更强大的响应式主题，获得此主题使用帮助 <a href="http://www.loome.net/wordpress-theme/loostrive/">Loostrive发布页</a>
	Author:Loome洛米
	Author URI:http://www.loome.net/
	Tags:Loostrive,Loome
	Version:1.3.3
*/
body { background: #eee; color: #333; font: 13px 微软雅黑, Verdana, Arial, Helvetica, sans-serif; line-height: 1; }
::selection { color: #fff; background: #FF7D00; }
::-moz-selection {color:#fff;background:#FF7D00;}
a:link, a:visited { color: #474747; text-decoration: none; -webkit-transition: background-color .15s linear, color .15s linear; -moz-transition: background-color .15s linear, color .15s linear; -o-transition: background-color .15s linear, color .15s linear; -ms-transition: background-color .15s linear, color .15s linear; transition: background-color .15s linear, color .15s linear; }
a:hover { color: #FF7D00; }
.clear { clear: both; }
.box { background: #fff; border: solid 1px #e3e3e3 \9; border-bottom: solid 1px #ccc \9;  -webkit-box-shadow: 0 2px 4px 0 #d9d9d9;-moz-box-shadow: 0 2px 4px 0 #d9d9d9;box-shadow: 0 2px 4px 0 #d9d9d9;}
h2 { font-size: 16px; font-weight: bold; line-height: 1.5em; padding-bottom: 10px; }
h3 { font-size: 15px; line-height: 36px; height: 36px; }
.container { max-width: 980px; margin: 0 auto; }
strong { font-weight: bold; }
blockquote, pre { padding: 5px 10px 5px 40px; margin: 10px 0; background: #F7F7F7 url(images/quotebg.gif) no-repeat 10px 10px; border: 1px solid #EBEBEB; color: #ff7d00; font-size: 12px; }
blockquote p, pre p { text-indent: 0 !important }
center { margin: 0 auto; text-align: center }
@-webkit-keyframes fadeInUp{
	0%{opacity:0;-webkit-transform:translateY(20px)}
	100%{opacity:1;-webkit-transform:translateY(0)}
}
@-moz-keyframes fadeInUp{
0%{opacity:0;-moz-transform:translateY(20px)}
100%{opacity:1;-moz-transform:translateY(0)}
}
/*header*/
.mainbar { background:#fff; border-bottom:1px solid #ddd \9; width:100%; height:32px; -webkit-box-shadow: 0 2px 4px 0 #d9d9d9;-moz-box-shadow: 0 2px 4px 0 #d9d9d9;box-shadow: 0 2px 4px 0 #d9d9d9;}
#topbar { height: 30px; line-height: 30px; float: left; overflow: hidden; }
#topbar ul { list-style: none; }
#topbar ul li { height: 33px; line-height: 33px; float: left; padding: 0 20px 0 0; text-align: center; font-size:12px }
#topbar ul li a{ color:#999}
#topbar ul li a:hover{ color:#ff7d00}
#topbar ul ul { display: none; }
.toolbar { height: 30px; line-height: 30px; float: left; }
#rss { float: right; }
#rss ul li { margin: 4px 0 0 14px; float: right }
.icon1, .icon1 span.hover, .icon2, .icon2 span.hover, .icon3, .icon3 span.hover, .icon4, .icon4 span.hover, .icon5, .icon5 span.hover, .icon6, .icon6 span.hover { display: block; width: 24px; height: 24px; background: url(images/social_icon.gif) no-repeat; }
.icon1 { background-position: 0 -48px; }
.icon1 span.hover { background-position: 0 -72px; }
.icon2 { background-position: 0 -192px; }
.icon2 span.hover { background-position: 0 -216px; }
.icon3 { background-position: 0 -240px; }
.icon3 span.hover { background-position: 0 -264px; }
.icon4 { background-position: 0 -96px; }
.icon4 span.hover { background-position: 0 -120px; }
.icon5 { background-position: 0 -144px; }
.icon5 span.hover { background-position: 0 -168px; }
.icon6 { background-position: 0 0; }
.icon6 span.hover { background-position: 0 -24px; }
#blogname { outline: none; overflow: hidden; }
#blogname h1 { text-indent: -9999px; height: 0; width: 0; }
.search_phone { display: none }
/*loading*/
#main_loading { position: fixed !important; position: absolute; top: 0; left: 0; height: 100px; width: 200px; z-index: 999; background: #000 url(images/loading.gif) no-repeat center; opacity: 0.6; filter: alpha(opacity=60); font-size: 14px; line-height: 20px; top: 50%; left: 50%; margin-top: -50px; margin-left: -100px; border-radius: 5px; }
#loading-one { color: #fff; position: absolute; top: 50%; left: 50%; margin: 50px 0 0 -50px; padding: 3px 10px; }
/*nav*/
.mainmenus { background: #363636; }
.home { float: left; height: 48px; width: 54px; background: #ff7d00 url(images/icon.png) no-repeat 5px -148px; text-indent: -9999px;}
.home_none { float: left; height: 48px; width: 54px; background: url(images/icon.png) no-repeat 5px -148px; text-indent: -9999px; }
.home_none:hover { background: #ff7d00 url(images/icon.png) no-repeat 5px -148px; }
.topnav { height: 48px; font-size: 14px; font-weight: bold; text-align: center; position:relative }
.topnav a { color: #fff; height: 48px; line-height: 48px; }
.topnav ul { z-index: 999; }
.topnav li { height: 48px; float: left; position: relative; width: auto; }
.topnav li a{ float: left; position: relative; padding: 0 20px; display: block; }
.topnav li a:hover, .topnav .current_page_item ,.topnav .current-menu-item,.topnav .current-post-parent{ background: #FF7D00; float: left; position: relative; }
.topnav ul ul { display: none; position: absolute; top: 48px; z-index: 999; left: 0;-webkit-animation:fadeInUp .3s .2s ease both;-moz-animation:fadeInUp .3s .2s ease both; }
.topnav ul ul li { font-size: 13px; color: #363636; display: block; position: relative; height: 36px; line-height: 36px;border-top: #444 solid 1px; left: -28px; }
.topnav ul ul li a { font-size: 13px; color: #fff; display: block; position: relative; width: 150px; height: 36px; line-height: 36px; text-align: left; background: #363636; font-weight: normal; }
.topnav ul ul li a:hover { font-size: 13px; color: #fff; display: block; position: relative; width: 150px; height: 36px; line-height: 36px; text-align: left; background: #FF7D00; font-weight: normal; }
.topnav ul ul ul { display: none; position: absolute; top: -1px; left: 190px; z-index: 999; }
.topnav ul ul ul li { font-size: 13px; color: #363636; display: block; position: relative; height: 36px; line-height: 36px; text-align: center; }
.topnav ul ul ul li a { font-size: 13px; color: #fff; display: block; position: relative; width: 150px; height: 36px; line-height: 36px; text-align: left; background: #363636; font-weight: normal; }
.topnav ul ul ul li a:hover { font-size: 13px; color: #fff; display: block; position: relative; width: 150px; height: 36px; line-height: 36px; text-align: left; background: #FF7D00; font-weight: normal; }
.topnav .menu-button {display:none; position: absolute; top:8px; right:54px; cursor: pointer; }
.topnav .menu-button.active{background:rgba(0,0,0,0.2); border-radius:5px;}
.topnav .menu-button i{ display:block; width:40px; height:33px; background:url(images/icon.png) no-repeat -2px -236px}
.topnav .menu-right{ position:absolute; right:0; top:0}
.topnav .menu-right .menu-search{ position:relative;}
.topnav .menu-right #menu-search{ width:14px;background: url(images/icon.png) no-repeat 5px -193px;}
.topnav .menu-right .menu-search .menu-search-form{ width: 200px; display:none; position:absolute; top:48px; right:0; background:#ff7d00; padding:15px; z-index:900}
.topnav .menu-right .menu-search .menu-search-form .button{border: none; background:#363636; color: #fff; padding: 6px 12px;}
.topnav .menu-right .current_page_item .menu-search-form{ display:block}

.subsidiary { background: #fff; height: 34px; padding: 0 10px; margin-bottom: 20px;}
.bulletin { overflow: hidden; height: 24px; margin: 5px 0; line-height: 24px; }
.bulletin span { width: 70px; }
.bulletin marquee { color: #FF7D00; }
.bdshare_small { margin-top: 5px; }

.full-width .textwidget{width: 100%;margin: 0;}
.full-width .textwidget img{max-width: 100%;}
/*************************侧边栏***********************/
#sidebar { width: 316px; margin-left: 16px; float: right; }
#sidebar-follow { width: 316px; }
.widget { padding: 10px; }
.widget h3 { padding: 0; margin-bottom: 10px; height: 30px; line-height: 30px; border-bottom: #ff7d00 solid 3px; font-size: 15px; font-weight: bold; }
.widget span { color: #FF7D00; }
.widget em { color: #666; font-style: normal; margin-right: 20px; float: right; }
.widget ul { padding: 1px 0 1px 0; }
.widget ul li { line-height: 1.5em; border-bottom: dashed 1px #f3f3f3; padding: 5px 0 }
/*文本*/
.textwidget { margin: -3px; overflow: hidden; width: 300px; }
.textwidget img { max-width: 300px; height: auto }
.inter-top .textwidget { margin:0; overflow: hidden; width: auto; }
.inter-top .textwidget img { max-width: inherit; height: auto }
/*文章tab*/
#tabnav { display: block; clear: both; zoom: 1; }
#tabnav li { float: left; width: 98px; border-bottom: #ccc solid 3px; text-align: center; cursor: pointer; list-style: none; font-weight: bold; font-size: 15px; padding-bottom: 5px; margin-bottom: 5px; }
#tabnav .selected { position: relative; background-color: #fff; color: #FF7D00; cursor: default; border-bottom: #ff7d00 solid 3px; }
#tab-content .hide { display: none; }
#tab-content ul { overflow: hidden; list-style: none }
#tab-content ul li { float: left; width: 100%; border-bottom: dashed 1px #f3f3f3; background: url(images/zt_con_li.gif) no-repeat left 12px;text-indent: 0.8em; }
#tab-content ul li a { overflow: hidden; text-overflow: ellipsis; white-space: nowrap; display: block }
/*搜索*/
.search { }
.search_site #searchform .search-s { display: block; height: 22px; *height:20px;padding: 10px; width: 250px; border: none; color: #999; box-shadow: none; line-height: 22px; }
.search_site #searchform label{display:block;height:40px;position:relative; width:250px}
.search_site #searchform span{position:absolute;float:left;line-height:40px;left:10px;color:#BCBCBC;cursor:text;z-index:10}
.search_site #searchform #searchsubmit { border: none; cursor: pointer; display: block; height: 42px; padding: 0; text-indent: -9999px; width: 44px; background: #ccc url(images/icon.png) no-repeat 0 -195px; float: right; }
.search_site #searchform #searchsubmit:hover { background: #FF7D00 url(images/icon.png) no-repeat 0 -195px;}
/*评论*/
.r_comment { position: relative; overflow: hidden; height: auto; }
.r_comment ul { list-style: none; overflow: hidden; position: relative; }
.r_comment li { line-height: 22px !important; clear: both; height: 48px; margin-bottom: 5px; overflow: hidden; border-bottom: dashed 1px #f3f3f3; }
.r_comment li:hover { border-right: #ff7d00 solid 3px; background: #f8f8f8; }
.r_comment ul li img.avatar { height: 35px; width: 35px; float: left; margin: 4px 8px 0 0; background: #fff; border: 1px solid #ddd; border-radius: 5px; }
/*登录*/
#loginform p { line-height: 26px; margin-bottom: 5px; }
#loginform input.login { width: 140px; padding: 2px; color: #444; border: 1px solid #dfdfdf; box-shadow: inset 2px 3px 5px #eee; }
#loginform input.denglu { width: 70px; margin-top: 5px; height: 63px; color: #444; text-align: center; border: 1px solid #dfdfdf; font-size: 16px; }
#loginform input.denglu:hover { background: #ff7d00; color: #fff; }
.loginl { float: left; margin: 5px 10px 5px 0; }
.loginl label { margin-right: 10px; }
#loginform label input[type="checkbox"]{ vertical-align:middle; margin-right:3px}
#loginform input:focus { border: 1px solid #ccc; }
.register { margin: 0 10px 0 50px; }
.v_avatar { margin: 5px; float: left; width: 64px; }
.v_avatar img { border-radius: 5px;height: auto;}
.v_li li { list-style-type: none; float: left; width: 100px; padding: 5px; }
/*标签*/
.tagcloud { height: auto; overflow: hidden; }
.tagcloud a:link, tagclouda:visited { padding: 3px 8px; background-color: #F3F3F3; margin: 2px; height: 20px; line-height: 30px; -moz-border-radius: 3px; border-radius: 3px; white-space: nowrap; -webkit-transition: background-color .15s linear, color .15s linear; -moz-transition: background-color .15s linear, color .15s linear; -o-transition: background-color .15s linear, color .15s linear; -ms-transition: background-color .15s linear, color .15s linear; transition: background-color .15s linear, color .15s linear; }
.tagcloud a:hover { background-color: #FF7D00; color: #FFF; }
.action { border-top: solid 1px #F3F3F3; margin-top: 5px; padding-top: 5px; text-align: right; }
.action a { color: #CCCCCC; }
/*图文*/
.imglist{ margin-left:-10px}
.imglist li{ float:left; width:142px; margin-left:10px;border-bottom:none !important; padding:0 !important;}
.imglist li h4{ margin:8px 0 10px 0;height:34px; overflow:hidden}
.imglist li img{ width:142px;}
/*日历*/
#wp-calendar{width: 100%;border-collapse: collapse;border-spacing: 0;  magrin:0 auto;       }
#wp-calendar #today{font-weight: 900; color: #990099; display:block;background-color: #F3F3F3; text-align:center;} 
#wp-calendar thead{font-size:14px;} 
#wp-calendar tfoot td{border-top:1px solid #F3F3F3;background-color:white; }
#wp-calendar tfoot td a{ color:#CCCCCC;} 
#wp-calendar caption{font-size:15px;border-bottom: #ff7d00 solid 3px;padding:5px 0;margin-bottom:10px;} 
#wp-calendar thead th{text-align:center;}
#wp-calendar tbody td{text-align:center;padding: 7px 0;}    
#wp-calendar a {color: #990099; text-decoration: none; cursor:pointer;} 
#wp-calendar a:hover {color:#ff7d00 ; text-decoration:none;font-weight:900;}
/*菜单*/
.widget .menu li,.blogroll li{display: inline-block;margin-right: 10px;background: url(images/zt_con_li.gif) no-repeat left 12px;padding-left: 7px !important;}
.widget .menu li.menu-item-has-children{display: block;}
.widget .menu li>ul li{border-bottom: none;}
/*首页文章列表*/
.mainleft { width: auto; overflow: hidden; }
#post_container { margin-left: -16px; position:relative }
#post_container li { position: relative; width: 316px;width: 314px \9; margin-left: 16px; float: left;-webkit-animation:fadeInUp .3s .2s ease both;-moz-animation:fadeInUp .3s .2s ease both;}
.thumbnail { max-height: 500px; overflow: hidden; }
.thumbnail a { display: block; padding: 7px 8px 0; }
.thumbnail img { width: 300px; height: auto; }
.article { padding: 15px 10px 0; position:relative }
.info { font-size: 12px;color: #999; white-space: nowrap; text-overflow: ellipsis; position: relative;  border-top: 1px solid #eee; line-height: 35px; padding: 0 5px; text-align: center; }
.info span { height: 20px; line-height: 17px; }
.info span a { color: #999; }
.info span a:hover { color: #ff7d00; }
.info_ico { background: url(images/info.png) no-repeat; padding: 0 5px 0 20px; }
.info_category { background-position: 0 -21px; }
.info_date { background-position: 0 -1px; }
.info_views { background-position: 0 -62px; }
.info_comment { background-position: 0 -43px; }
.info_author { background-position: 0 -82px; }
.entry_post { line-height: 22px; color: #999; margin-bottom: 10px; word-break: break-all; }
.sticky { background: #ff7d00; height: 25px; width: 45px; position: absolute; z-index: 20; top: -1px; right: -1px; color: #fff; font-weight: bold; text-align: center; line-height: 25px;border-radius: 0 0 0 5px; }
.zoom { width: auto; height: auto; display: block; position: relative; overflow: hidden; background: none; }
.zoomOverlay {opacity: 0; position: absolute; top: 0; left: 0; bottom: 0; right: 0; display: none; margin: 7px 7px 0 7px; background-image: url(images/zoom.png); background-repeat: no-repeat; background-position: center; }
.zoom:hover .zoomOverlay{filter:alpha(Opacity=50);-moz-opacity:0.5;opacity: 0.5;display: block; background-color:#000;}
#post_container .fixed-hight h2 a{ display:block;white-space: nowrap;text-overflow:ellipsis; overflow:hidden;}
#post_container .fixed-hight .entry_post{overflow: hidden;height: 42px;}
#post_container .fixed-hight .info{ overflow:hidden; height:35px;}
#post_container li:hover h2 a{color: #ff7d00;}
/*分页*/
.pagination a,.pagination span { width: 28px; text-align: center; height: 28px; line-height: 28px; margin: 0px 0 0px 4px; display: inline-block; text-decoration: none; border: 1px #dfdfdf solid; background: #fff; color: #888;-webkit-box-shadow: 0 2px 4px 0 #d9d9d9;-moz-box-shadow: 0 2px 4px 0 #d9d9d9;box-shadow: 0 2px 4px 0 #d9d9d9; }
.pagination a.extend { padding: 0 5px }
.pagination .current { height: 28px; width: 28px; color: #fff; border: 1px #333 solid; background: #333; margin: 20px 0 0 4px; }
.pagination a:hover { height: 28px; width: 28px; color: #fff; border: 1px #333 solid; text-decoration: none; background: #333; }
.pagination .page_previous, .pagination .prev { width: 54px; height: 28px; text-align: center; }
.pagination .page_previous:hover, .pagination .prev:hover { width: 54px; height: 28px; text-align: center; }
.pagination .page_next, .pagination .next, .pagination .page_next:hover, .pagination .next:hover { width: 54px; height: 28px; text-align: center; }
.pagination .fir_las, .pagination .fir_las:hover { width: 34px; height: 28px; text-align: center; }
/*single*/
.article_container { padding: 10px; }
.article_container h1 { font-size: 18px; margin-top: 5px; font-weight: bold; line-height: 1.5em; padding-bottom: 10px; }
.article_info { padding: 10px 0; border-top: #ff7d00 solid 5px; line-height: 1.5em; color: #999; font-size:12px;}
.article_info a { color: #999 }
.article_info a:hover { text-decoration: underline }
.context { overflow: hidden; }
#post_content{ padding:0 15px;word-break:break-all;}
#post_content a{ text-decoration:underline}
.context, .context p, .context a, .context pre { line-height: 2em; font-size: 14px; }
.context ol, .context ul { margin-left: 40px; }
.context ol li, .context ul li { line-height: 2em; }
.context ol li { list-style-type: decimal; }
.context ul li { list-style: url(images/zt_con_li.gif);}
.context h3,.context h4,.context h5{border-bottom:#eee 1px solid;padding-bottom:5px;margin-bottom:20px}
.context h2{font-size:16px;font-weight:normal;padding:10px 20px 9px 20px;line-height:18px;border-left:4px solid #ff7d00;background-color:#f3f3f3}
.context p embed, .context object { margin: 0 auto }
.context code { background: #FFF8DF; color: #9C2E0E; font-style: italic; padding: 2px 3px; line-height: 2em; }
.context table{border-top:solid 1px #ddd;border-left:solid 1px #ddd;width:100%;margin-bottom:16px}
.context table th{background-color:#f9f9f9;text-align:center}
.context table td,.article-content table th{border-bottom:solid 1px #ddd;border-right:solid 1px #ddd;padding:5px 10px}
.context .alignleft{float:left;text-align:left;margin-right:10px}
.context .aligncenter{margin: 0 auto;text-align: center;display: block;}
.context .alignright{float:right;text-align:right;margin-left:10px}
.context .wp-caption {border: solid 1px #eee;border-radius: 2px;padding:5px;box-shadow: 2px 2px 0 #fbfbfb;margin-bottom: 15px; max-width:100%;}
.context .wp-caption:hover {border-color: #ddd;}
.context .wp-caption-text {margin:  5px -5px -5px;border-radius: 0 0 2px 2px;background-color: #fbfbfb;border-top: 1px solid #eee;padding: 5px;color: #999;}
.context .article_tags { font-size: 12px; line-height: 40px; margin-top: 15px; text-align: center; border-top: 1px #cdcdcd dashed; border-bottom: 1px #cdcdcd dashed; }
.context .img-responsive{display:block;height:auto;max-width:100%}
.baishare { margin: 8px 0 0 0; _margin: 5px 14px 0 0; }
#authorarea { position: relative; float: left; width: 100px; }
#authorarea img{height: auto;}
.author_arrow { position: absolute; float: left; border-style: solid; border-width: 10px; border-color: transparent #fff transparent transparent; height: 0; width: 0; font-size: 0; top: 42px; left: 80px; }
.authorinfo { height: 80px; padding-left: 110px; }
.authorinfo h4{font-size: 16px;margin-bottom: 10px;}
.post-navigation { clear: both; overflow: hidden; }
.post-navigation div { display: block; position: relative; font-size: 14px; color: #999; }
.post-next { float: right; text-align: right; padding-right: 40px; }
.post-previous { float: left; padding-left: 40px; }
.post-navigation div a:after { position: absolute; color: #CCC; font-size: 56px; margin-top: -11px; height: 22px; line-height: 22px; top: 34%; }
.post-previous a:after { content: '«'; left: 0px; }
.post-next a:after { content: '»'; right: 0px; }
.related { overflow: hidden;}
.related ul { margin-left: -1px; }
.related_box { float: left; width: 24.8%;border-left: 1px #eee solid }
.related_box:hover { background: #ff7d00; }
.related_box a:hover { color: #fff; }
.related_box .r_title { padding: 0 8px; text-align: center; }
.related_box .r_pic { margin: 8px auto; width: 140px;}
.related_box .r_pic img { width: 140px;}
#content table, #content button { margin: 10px auto; }
#content p { margin: 0 0 20px 0 }
#content .content_post ol li { list-style: decimal inside; color: #272727; line-height: 26px; font-size: 13px }
#content .content_post ul li { background: url(images/zt_con_li.gif) no-repeat; text-indent: 1.3em; color: #272727; line-height: 26px; font-size: 13px }
#content b, #content strong { font-weight: bold }
#content i, #content em, #content var, #content dfn { font-style: italic }
#content th, #content td { display: table-cell; vertical-align: inherit; padding: 1px; line-height: 2em }
#content th { font-weight: 700; padding: 1px }
#content td { text-align: inherit; padding: 1px }
#content .pagelist { padding-top: 10px; background: #f3f3f3; text-align: center; margin-top: 20px }
#content .pagelist>span,#content .pagelist>a{display: inline-block;background-color: #fff ;border: 1px#ddd solid ;color: #000;margin-left: 5px;padding: 4px 10px ;text-transform: uppercase;margin-bottom:10px}
#content .pagelist>a:hover,#content .pagelist>span{background-color: #363636;color: #fff !important;}
.alignleft { float: left; margin: 5px 15px 5px 0 }
.alignright { float: right; margin: 5px 0 5px 15px }
/*comments*/
#comments { font-size: 15px; font-weight: bold; margin-left: 10px; height:auto; padding-top: 5px; }
#comments_box .navigation{ margin-top:-50px; margin-right:10px; font-size:12px}
#comments_box .pagination a,#comments_box .pagination span,#comments_box .pagination .current{ line-height:20px; height:20px}
#respond_box .tip{padding-left: 15px;}
#respond { margin: 10px 10px 20px 10px; border-top: 5px solid #ff7d00; padding-top: 10px; }
#respond p { line-height: 30px;margin-bottom: 0;}
#respond h3 { font-size: 14px; font-weight: bold;}
.comt-box { border: solid 1px #DDD; border-color: #C6C6C6 #CCC #CCC #C6C6C6; border-radius: 3px; padding: 8px; box-shadow: inset 2px 0 2px #F2F2F2, inset 0 2px 2px #EEE, 0 2px 0 #F8F8F8, 2px 0 0 #F8F8F8; background-color: white; clear: right; }
.comt-area { _margin-top: -35px; border: 0; background: none; width: 100%; font-size: 12px; color: #666; margin-bottom: 5px; min-height: 70px; box-shadow: none; }
.comt-ctrl { position: relative; margin: 0 -8px -8px; _margin-right: -10px; height: 32px; line-height: 32px; border-radius: 0 0 3px 3px; border-top: solid 1px #DDD; background-color: #FBFBFB; box-shadow: inset 0 1px 0 #FBFBFB; color: #999; }
.comt-submit {font-family: "微软雅黑"; position: absolute; right: -1px; top: -1px; border: solid 1px #CCC; height: 34px; width: 120px; cursor: pointer; font-weight: bold; color: #666; font-size: 12px; border-radius: 0 0 3px 0; background-image: -webkit-linear-gradient(#F6F6F6, #E2E2E2); text-shadow: 0 -1px 0 white; }
#comment-author-info { margin-bottom: 10px; height: 27px; }
#comment-author-info label { margin-left: 5px; }
#comment-author-info input { width: 20.5%; margin-left: -4px; margin-top: -5px \9; vertical-align: middle \9; }
.comment_input { margin-left: 27px; }
#real-avatar { float: left; width: 27px; }
#real-avatar img { width: 27px; height: 27px; }
.comt-addsmilies, .comt-addcode { float: left; color: #888; padding: 0 10px; }
.comt-smilies { display: none; position: absolute; top: 0; left: 40px; height: 30px; background-color: #FBFBFB; overflow: hidden; }
.comt-smilies a { float: left; padding: 8px 1px 0px; }
.wp-smiley{height: 16px !important;max-height:16px !important;}
.comt-num { font-size: 12px; color: #999; float: right; margin-right: 140px; }
.comt-num em { font-weight: bold; font-size: 14px; }
.commentlist .comment { list-style: none; border-top: 1px solid #eee; }
.commentlist li.comment ul.children { margin-left: 20px; }
.commentlist .depth-1 { margin: 0; }
.commentlist li { position: relative; }
.commentlist .thread-even { background: #fafafa; }
.commentlist .comment-body { padding: 10px; border-left: 5px solid transparent; }
.commentlist .comment-body:hover { background: #f5f5f5; border-left: 5px solid #ff7d00; }
.commentlist .comment-body p { margin: 5px 0!important; line-height: 22px;word-break: break-all;}
.reply a:link, .reply a:visited { text-align: center; font-size: 12px; }
.datetime { font-size: 12px; color: #aaa; text-shadow: 0px 1px 0px #fff;}
.commentmetadata { font-size: 12px; color: #aaa; text-shadow: 0px 1px 0px #fff; margin-left: 50px; }
ol.commentlist li div.vcard img.avatar { width: 40px; height: 40px; position: relative; float: left; margin: 4px 10px 0 0; border-radius: 5px; }
ol.commentlist li div.floor { float: right; color: #bbb }
.children li.comment-author-admin { border-top: #FF7D00 solid 2px; }
.cancel-comment-reply{float: right;margin-top: -20px;}
/*footer*/
#footnav a, #friendlink a { color: #888 }
#footnav a:hover, #friendlink a:hover { color: #ff7d00 }
#footer { text-align: center; background: #222; padding: 20px 0 15px 0; font-size: 12px; color: #888; line-height: 1.5em; margin-top: 50px;  border-top: 5px solid #FF7D00; }
#footer p { text-align: center; }
.footnav { line-height: 30px; font-size: 14px; }
.footnav ul { list-style: none; text-align: center; }
.footnav ul li { height: 30px; line-height: 30px; display: inline; padding: 0 10px 0 0; }
.footnav ul ul { display: none; }
.copyright { color: #666;}
.copyright p{ line-height:2em }
.copyright a { color: #666;}
.copyright a:hover { color: #FF7D00 }
#footer p.author a { color: #444; }
#footer p.author a:hover { text-decoration: underline }
/*gototop*/
#tbox { width:45px; float: right; position: fixed; right: 20px; bottom:10%; z-index: 999;}
#pinglun, #home, #gotop { width:45px; height:45px; background: #ff7d00 url(images/icon.png) no-repeat; display: block; margin-bottom: 5px; filter: alpha(Opacity=50); -moz-opacity: 0.5; opacity: 0.5; }
#pinglun:hover, #home:hover, #gotop:hover { filter: alpha(Opacity=100); -moz-opacity: 1; opacity: 1; }
#pinglun { background-position: 0 -50px; }
#home { background-position: 0 5px; }
#gotop { background-position: 0 -100px; }
/*幻灯*/
.slider { width: 645px; overflow: hidden;-webkit-box-shadow: 0 2px 4px 0 #d9d9d9;-moz-box-shadow: 0 2px 4px 0 #d9d9d9;box-shadow: 0 2px 4px 0 #d9d9d9; }
#focus { width: 100%; height: 370px; overflow: hidden; position: relative; }
#focus ul { height: 430px; position: absolute; }
#focus ul li { float: left; width: 645px; height: 370px; overflow: hidden; position: relative; background: #ccc; }
#focus ul li div { position: absolute; overflow: hidden; }
#focus .button { position: absolute; width: 645px; height: 10px; padding: 5px 10px; right: 0; bottom: 0; text-align: right;bottom: 10px; }
#focus .button span { display: inline-block; _display: inline; _zoom: 1; width: 25px; height: 10px; _font-size: 0; margin-left: 5px; cursor: pointer; background: #fff; }
#focus .button span.on { background: #fff; }
#focus .preNext { width: 45px; height: 100px; position: absolute; top: 125px; background: url(images/sprite.png) no-repeat 0 0; cursor: pointer; }
#focus .pre { left: 0; }
#focus .next { right: 0; background-position: right top; }
#focus ul li a { display: block; overflow: hidden; }
#focus ul li a img { width: 650px; height: auto; }
.flex-caption { max-width: 610px; left: 0; bottom: 30px; background: #ff7d00; opacity: 0.8; color: #fff; padding: 10px 20px; }
.flex-caption a { color: #fff; }
.flex-caption:hover { opacity: 1; }
.flex-caption .btn { display: none; }
.slides_entry { display: none; }
/*读者墙*/
.readers-list { line-height: 19px !important; text-align: left; overflow: hidden; _zoom: 1;text-align: center;margin-bottom: 30px !important;}
.readers-list li { width: 200px; display: inline-block; *margin-right:-1px}
.readers-list a, .readers-list a:hover strong { background-color: #f2f2f2; }
.readers-list a { font-size:12px;  line-height:19px !important; position: relative; display: block; height: 36px; margin: 4px; padding: 4px 4px 4px 44px; color: #999; overflow: hidden; border: #eee 1px solid; border-radius: 2px; box-shadow: #eee 0 0 2px }
.readers-list img, .readers-list em, .readers-list strong { -webkit-transition: all .2s ease-out; -moz-transition: all .2s ease-out; transition: all .2s ease-out }
.readers-list img { width: 36px; height: 36px; float: left; margin: 0 8px 0 -40px; border-radius: 2px }
.readers-list em { color: #666; font-style: normal; margin-right: 10px }
.readers-list strong { color: #ddd; width: 40px; text-align: right; position: absolute; right: 6px; top: 4px; font: bold 14px/16px microsoft yahei }
.readers-list a:hover {background-color: #fff;}
.readers-list a:hover img { opacity: .6; margin-left: 0 }
.readers-list a:hover em { color: #ff7d00; font: bold 12px/36px microsoft yahei }
.readers-list a:hover strong { color: #ff7d00; right: 150px; top: 0; text-align: center; height: 44px; line-height: 40px }
.readers-list span.name{word-break:break-all; max-width:120px; display:block}
/*文章归档*/
.articles_all { line-height: 35px;}
#archives_page .al_year{line-height: 48px; font-size: 18px; color: #ff7d00;height:auto;border-bottom:1px solid #eee;margin-bottom:16px;}
#archives_page .al_mon{cursor:pointer;fotn-weight:700}
#archives_page .al_post_list li span,#archives_page .al_post_list li em,#archives_page p em{color:#999}
#archives_page .al_post_list li a{word-break: break-all;}
#archives_page p{float:right;margin-top:-50px;}
/*友情链接*/
.flink{ list-style: none; }
.flink .linkcat {}
.flink .blogroll{margin: 0 0 20px;}
.flink .blogroll li{  margin:0 10px 10px 0;background: none;padding-left:0 !important;}
.flink .blogroll li a{display: inline-block;padding: 8px 20px;border: 1px solid #eee;background: #f8f8f8;line-height: 16px;}
.flink .blogroll li a:hover{background: #FF7D00;color: #fff;}
.flink .blogroll li a img{width: 16px;padding: 0 5px 0 0;}
/*页面*/
.page_title{border-bottom: #ff7d00 solid 5px;margin-bottom: 15px;}
.cont_none ul, .cont_none ul li { list-style: none; margin: 0; }

.adphone,.single-adphone{display:none;}
/*Responsive Structure*/
@media only screen and (max-width: 640px) {
.container { max-width:360px !important;}
#blogname a{display:block;text-align:center}
#sidebar,.subsidiary, .slider, #rss, .banner, .article_related,.single-ad { display: none !important; }
.mainleft { margin: 0 auto; overflow:visible}
#post_container li { max-width: 316px; }
#comment-author-info { height: auto; }
#comment-author-info input { width: 70.5%; margin-bottom: 5px; }
.search_phone { display: block }
#post_container{ margin-left:-10px}
#post_container li{ width:47%; margin-left:10px; max-width:100%;-webkit-animation:none;-moz-animation:none}
#post_container li .thumbnail{width:100%;}
#post_container li .article h2{font-size: 14px;}
#post_container li .article h2 a{white-space:normal}
#post_container li .article .entry_post{display: none;}
#post_container li .info{clear: both;}
#post_container li .sticky{right: 0;}
#post_container li .zoomOverlay{ display:none !important}
#tbox{ right:0;}
.topnav{overflow: visible;}
.topnav .menu-button{ display:block}
.topnav .menu{ display:none; padding:48px 15px 0}
.topnav .menu.open{ display:block; -webkit-transition: all .5s ease-in-out; -moz-transition: all .5s ease-in-out; -ms-transition: all .5s ease-in-out; transition: all .5s ease-in-out;}
.topnav .menu li{ height:auto;width:100% !important}
.topnav .menu li a{width:90% !important; padding:0 5% !important }
.topnav li .sub-menu{ position:relative; display:block !important; top:0; left:20px}
.topnav ul ul{-webkit-animation:none;-moz-animation:none}
.adphone,.single-adphone{display:block;}
}
@media only screen and (min-width:640px) and (max-width:980px) {
.container { max-width: 640px !important; }
.mainmenus { margin-bottom: 1.5em; }
#sidebar, .subsidiary, .slider { display: none !important; }
#post_container { margin-left: -7px !important; }
#post_container li { width: 314px; margin-left: 7px !important;}
#tbox { right: 10px !important; }
}
@media only screen and (min-width:1330px) {
.container { max-width: 1312px !important; }
.slider { width: 980px !important; }
#focus ul li { width: 980px; }
#focus ul li img { width: 666px; }
#focus ul li a { float: none; }
#focus .button { width: 980px; }
.slides_entry { display: block !important; margin-top: 10px; font-size: 14.7px; line-height: 1.5em; }
.flex-caption { left: 650px !important; width: 292px; bottom: 0 !important; height: 350px; }
.flex-caption h2 { line-height: 1.5em; margin-bottom: 20px; padding: 10px 0 20px 0; font-size: 18px; font-weight: bold; border-bottom: 1px #fff dashed; }
.flex-caption .btn { display: block !important; margin-top: 30px; width: 55px; }
.flex-caption .btn a { color: #ff7d00; }
#focus ul li a img { width: 650px !important; }
.related_box{ width:158px !important}

}