var output =  document.getElementById("output")




function getRandom(min, max) {
    min = Math.ceil(min);
    max = Math.floor(max);
    return Math.floor(Math.random() * (max - min + 1)) + min;
  }
  

function random(){
    const randomNumber = getRandom(65, 90);
    output.innerHTML = String.fromCharCode(randomNumber)

}



  