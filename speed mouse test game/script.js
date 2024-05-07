const items = document.querySelectorAll('.item')
var points = document.getElementById("points")
var score = 0

function getRandomIndex(max) {
  return Math.floor(Math.random() * max);
}



const randomIndex = getRandomIndex(items.length);
items[randomIndex].style.backgroundColor = "red";

items.forEach(item => {
    item.addEventListener('click', () => {
      if (item.style.backgroundColor === 'red') { 
          item.style.backgroundColor = 'white'
        const newRandomIndex = getRandomIndex(items.length);
        items[newRandomIndex].style.backgroundColor = "red";
        score += 1
        points.textContent = score
        return;
      }
     
      
  
      changeBackgroundColor(item); 
    });
  });



  