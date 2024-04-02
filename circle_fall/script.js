const canvas = document.createElement('canvas');
const ctx = canvas.getContext('2d');
const width = window.innerWidth;
const height = window.innerHeight;
canvas.width = width;
canvas.height = height;
document.body.appendChild(canvas);

x = 0; 
y = 0; 
speed = 2;
radius = 100;


function circle(){
    x = canvas.width/2
    ctx.clearRect(0,0,canvas.width,canvas.height);
    y += speed
    radius -= 0.1
    if(y == canvas.height){
        y = -200
        radius = 100
    }
ctx.beginPath();
ctx.arc(x, y, radius, 0, Math.PI * 2, false); 
ctx.fillStyle = 'white';
ctx.fill();

requestAnimationFrame(circle);
}


circle()
