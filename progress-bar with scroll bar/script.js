const progressBar = document.querySelector('.progress-bar');
const content = document.querySelector('.content');

function update() {
  const scrolled = (window.scrollY / (content.scrollHeight - window.innerHeight)) * 100;
  progressBar.style.width = `${scrolled}%`;
}


update();
window.addEventListener('scroll', update);
