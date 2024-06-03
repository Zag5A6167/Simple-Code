var textInput = document.getElementById('textInput')
var btn = document.getElementById('btn')
var content = document.getElementById('content')



btn.addEventListener('click',function(){
    var newDiv = document.createElement("div")
    newDiv.textContent = textInput.value
    content.appendChild(newDiv)
    alert("Success")

});