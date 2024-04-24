var canvas = document.getElementById("canvas");
var ctx = canvas.getContext("2d");

var winH = window.innerHeight;
var winW = window.innerWidth;
canvas.height = winH;
canvas.width = winW;

canvas.style.backgroundColor = "#f3f";


ctx.beginPath();


ctx.strokeStyle = "black";
ctx.moveTo(0, 0);
ctx.lineTo(1000, 500);
ctx.stroke();


ctx.closePath();

