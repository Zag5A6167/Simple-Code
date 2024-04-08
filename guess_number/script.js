const val = document.getElementById('valNumber')
const btn1 = document.getElementById('btn')
const numberShow = document.getElementById('show')

var x = Math.floor((Math.random() * 10) + 1);



var text = 0

function play(){
  

    if(val.value == x){
        alert("Correct!!!!!")
        val.value = ""
        x = Math.floor((Math.random() * 10) + 1);
    }
    else{
        val.value = ""
    }

}




btn1.addEventListener('click',play)
