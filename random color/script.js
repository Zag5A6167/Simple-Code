const output =  document.getElementById("output")




function random(){
    var rnd = Math.floor(Math.random()*16777215).toString(16);
    document.body.style.backgroundColor = "#" + rnd
    output.innerHTML = "#" + rnd
}