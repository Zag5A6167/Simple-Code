var text = document.getElementById('text')
var copyBtn = document.getElementById('copyBtn')

console.log(text.value)


copyBtn.addEventListener('click',function(){
    alert(text.value)
})