const btn = document.getElementById("btn")
const image = document.getElementById("image")



btn.addEventListener('click',function(){
    image.style.visibility = image.style.visibility === 'hidden' ? 'visible' : 'hidden';
})