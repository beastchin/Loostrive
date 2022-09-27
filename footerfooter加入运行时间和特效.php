<div class="clear"></div>
<div id="footer">
  <?php if (get_option('strive_footnav') == 'Display') { ?>
  <div class="footnav container">
    <?php if(function_exists('wp_nav_menu')) {wp_nav_menu(array('theme_location'=>'footnav','menu_id'=>'footnav','container'=>'ul'));}?>
  </div>
  <?php }?>
  <?php if (get_option('strive_flinks') == 'Display') { ?>
  <?php wp_reset_query(); if ( is_home() ) { ?> 
  <div class="footnav container">
    <?php if(function_exists('wp_nav_menu')) {wp_nav_menu(array('theme_location'=>'friendlink','menu_id'=>'friendlink','container'=>'ul'));}?>
  </div>
  <?php } ?>
  <?php }?>
<link href="//lib.baomitu.com/font-awesome/6.1.2/css/all.css" rel="stylesheet">
  <div class="copyright">
  <p> Copyright <?php echo comicpress_copyright();?> <a href="<?php bloginfo('url');?>/">   <strong></a> Powered by <a href="https://smwlblog.top/" rel="external">丝魅网魉</a><br />
  <span class="fas fa-layer-group"></span>本站已稳定运行：</strong>
                        <strong id="day_show">载入中...</strong>  <br>
                        <strong><span class="fas fa-clock"></span> 当前时辰:</strong>
                        <strong id="time_show">载入中...</strong>
                        <span>|</span>
                        <strong><span class="fas fa-heart"></span> 页面载入耗时:</strong>
                        <strong id="load_show">载入中...</strong>
  <script>
    var start = new Date().getTime();
    function timestamp() {
        let outcome = Math.round(new Date().getTime() / 1000).toString();
        return outcome
    }
    function timer(intDiff) {
        myTimer = window.setInterval(function () {
            var day = 0,
                hour = 0,
                minute = 0,
                second = 0;//时间默认值
            if (intDiff > 0) {
                day = Math.floor(intDiff / (60 * 60 * 24));
                hour = Math.floor(intDiff / (60 * 60)) - (day * 24);
                minute = Math.floor(intDiff / 60) - (day * 24 * 60) - (hour * 60);
                second = Math.floor(intDiff) - (day * 24 * 60 * 60) - (hour * 60 * 60) - (minute * 60);
            }
            if (hour <= 9) hour = "0" + hour;
            if (minute <= 9) minute = "0" + minute;
            if (second <= 9) second = "0" + second;

            $('#day_show').html(day + '天 ' + hour + '时 ' + minute + '分 ' + second + '秒');

            var now = new Date();
            var year = now.getFullYear();   // 得到年份
            var month = now.getMonth();     // 得到月份
            var date = now.getDate();       // 得到日期
            var day = now.getDay();         // 得到周几
            var hour = now.getHours();      // 得到小时
            var minu = now.getMinutes();    // 得到分钟
            var sec = now.getSeconds();     // 得到秒钟

            if (hour > 0 && hour <= 2) text = "丑时";
            else if (hour > 2 && hour <= 4) text = "寅时";
            else if (hour > 4 && hour <= 6) text = "卯时";
            else if (hour > 6 && hour <= 8) text = "辰时";
            else if (hour > 8 && hour <= 10) text = "巳时";
            else if (hour > 10 && hour <= 12) text = "午时";
            else if (hour > 12 && hour <= 14) text = "未时";
            else if (hour > 14 && hour <= 16) text = "申时";
            else if (hour > 16 && hour <= 18) text = "酉时";
            else if (hour > 18 && hour <= 20) text = "戌时";
            else if (hour > 20 && hour <= 22) text = "亥时";
            else text = "子时";
            $('#time_show').html('<a href="https://www.beijing-time.org/shichen" target="_blank">' + text + '</a>');

            intDiff++;
        }, 1000);
    }
    var nowtime = timestamp(); // 现行时间戳
    var mytime = 1496887688; // 设置安装时间（安装日期时间戳）
    timer(nowtime - mytime); // 启动循环

    // 页面加载完成后执行
    $(document).ready(function () {
        // $('.footer-new').hide(); // 隐藏底部
        $('.footer-new').show(); // 显示底部
        $('#load_show').html((new Date().getTime() - start) + 'ms');
    });
</script>
<!-- 网页鼠标点击特效 -->
<script>
    (function () {
        var a_idx = 0;
        window.onclick = function (event) {
            var a = new Array("❤富强❤", "❤民主❤", "❤文明❤", "❤和谐❤", "❤自由❤", "❤平等❤", "❤公正❤", "❤法治❤", "❤爱国❤",
                "❤敬业❤", "❤诚信❤", "❤友善❤");
            var heart = document.createElement("b"); //创建b元素
            heart.onselectstart = new Function('event.returnValue=false'); //防止拖动

            document.body.appendChild(heart).innerHTML = a[a_idx]; //将b元素添加到页面上
            a_idx = (a_idx + 1) % a.length;
            heart.style.cssText = "position: fixed;left:-100%;"; //给p元素设置样式

            var f = 13, // 字体大小
                x = event.clientX - f / 2 - 30, // 横坐标
                y = event.clientY - f, // 纵坐标
                c = randomColor(), // 随机颜色
                a = 1, // 透明度
                s = 0.8; // 放大缩小

            var timer = setInterval(function () { //添加定时器
                if (a <= 0) {
                    document.body.removeChild(heart);
                    clearInterval(timer);
                } else {
                    heart.style.cssText = "font-size:16px;cursor: default;position: fixed;color:" +
                        c + ";left:" + x + "px;top:" + y + "px;opacity:" + a + ";transform:scale(" +
                        s + ");";

                    y--;
                    a -= 0.016;
                    s += 0.002;
                }
            }, 15)
        }
        // 随机颜色
        function randomColor() {
            return "rgb(" + (~~(Math.random() * 255)) + "," + (~~(Math.random() * 255)) + "," + (~~(Math
                .random() * 255)) + ")";
        }
    }());
</script>
  </p>
  </div>
</div>
</div>
<!--gototop-->
<div id="tbox">
  <?php if( is_single() || is_page()){?>
  <a id="home" href="<?php bloginfo('url');?>"></a>
  <?php } ?>
  <?php if( is_single() || is_page() ){ ?>
  <?php $post_info = get_post(get_the_ID(), ARRAY_A);if (!$post_info['comment_count'] == 0 || 'open' == $post->comment_status) { ?>
  <a id="pinglun" href="#comments_box" title="前往评论"><i class="fa fa-commenting"></i></a>
  <?php }}?>
  <a id="gotop" href="javascript:void(0)"></a> </div>
<?php wp_footer(); ?>

<?php if (get_option('strive_bdshare') == 'Display'&&is_home()) { ?>
<script>window._bd_share_config={"common":{"bdSnsKey":{},"bdText":"","bdMini":"2","bdMiniList":false,"bdPic":"","bdStyle":"0","bdSize":"16"},"share":{}};with(document)0[(getElementsByTagName('head')[0]||body).appendChild(createElement('script')).src='https://wuchaolong.github.io/baiduShare/static/api/js/share.js'];</script>
<?php }?>
<?php if (get_option('strive_bdshare') == 'Display'&&is_single()) { ?>
<script>window._bd_share_config={"common":{"bdSnsKey":{},"bdText":"","bdMini":"2","bdMiniList":false,"bdPic":"","bdStyle":"0","bdSize":"24"},"share":{}};with(document)0[(getElementsByTagName('head')[0]||body).appendChild(createElement('script')).src='https://wuchaolong.github.io/baiduShare/static/api/js/share.js'];</script>
<?php }?>
</body></html>