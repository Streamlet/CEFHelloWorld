var div = document.createElement("div");
div.setAttribute('style', 'position: fixed; top: 10px; right: 10px; width: 130px; height: 20px; background-color: #cccccc; opacity:0.8; padding: 0 5px');
div.innerHTML = '<a href="javascript:window.about()">关于 CEF Browser</a>';

var body = document.getElementsByTagName('body')[0];
body.append(div);
