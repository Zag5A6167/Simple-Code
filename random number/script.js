const val1 = document.getElementById("number-1")
const val2 = document.getElementById("number-2")
var output = document.getElementById("output")



function random(){
    const rndInt = Math.floor(Math.random() * parseInt(val2.value)) + parseInt(val1.value)
    output.innerHTML = rndInt



}