var canvas = document.getElementById("canvas")
var ctx = canvas.getContext("2d")
function mousePos(event){
    const rect = canvas.getBoundingClientRect()
    const x = event.clientX - rect.left
    const y = event.clientY - rect.top
    console.log(x,y)
}

canvas.addEventListener('mousemove',mousePos)