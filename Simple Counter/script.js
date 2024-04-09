const ctnVal = document.getElementById("value")

var val = 0

function add(){
    val++
    ctnVal.innerHTML = val
}


function minus(){
    val--
    ctnVal.innerHTML = val
    if(val < 0){
        val = 0
        ctnVal.innerHTML = val
    }
}

function reset(){
    val = 0
    ctnVal.innerHTML = val
}