let x = 0
function counter(){
    x++
    document.title = x
}

setInterval(counter,500)