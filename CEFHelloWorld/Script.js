var div = document.createElement("div");
div.setAttribute('style', 'position: fixed; bottom: 0; width: 100%; height: 80px; background-color: #ff0000');
div.innerText = 'Injected DIV';

var body = document.getElementsByTagName('body')[0];
body.append(div);
