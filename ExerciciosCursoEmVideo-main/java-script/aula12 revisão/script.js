var box = document.querySelector('div.box')

var img = document.createElement('img')
img.src = "madrugada.jpg"

var teste = document.createElement('h1')
teste.innerText = 'teste'

console.log(box)
console.log(img)
console.log(teste)

box.appendChild(img)