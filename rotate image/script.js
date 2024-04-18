const image = document.getElementById("img");
let x = 0;

function rotate() {
  x += 10
  image.style.transform = "rotate(" + x + "deg)";


  requestAnimationFrame(rotate);
}

requestAnimationFrame(rotate);
