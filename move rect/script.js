var canvas = document.getElementById('canvas')
var ctx = canvas.getContext('2d')

var x = 10
var y = 10
document.addEventListener('keydown', function (event) {
    switch (event.key) {
        case 'w':
            y -= 10
            break
        case 's':
            y += 10
            break
        case 'a':
            x -= 10
            break
        case 'd':
            x += 10
            break
    }
    ctx.fillStyle = 'black'
    ctx.beginPath()
    ctx.rect(x, y, 10, 10)
    ctx.fill()
})

