var angle = 0

function left() {
    angle += 20
    document.getElementById("img_face").style.transform = "rotate("+ angle + "deg)";
  }
  
  function right() {
    angle -= 20
    document.getElementById("img_face").style.transform = "rotate("+ angle + "deg)";
  }
  