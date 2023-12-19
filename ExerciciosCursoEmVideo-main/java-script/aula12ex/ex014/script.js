
function carregar() {
    var msg = document.getElementById('msg')
var img = document.getElementById('paisagem')
var data = new Date()
var horas = data.getHours()
var minutos = data.getMinutes()
msg.innerHTML = `agora são <strong> ${horas}:${minutos}</strong>`


if (horas > 5 && horas < 12 ) { 
    img.style.backgroundImage = ' url(src/manha.jpeg)'
} else if (horas >= 11 && horas < 13) {
    img.style.backgroundImage = ' url(src/meiodia.jpeg)'
} else if (horas >= 13 && horas < 15) {
    img.style.backgroundImage = ' url(src/tardedia.jpeg)'
} else if (horas >= 15 && horas < 18) {
    img.style.backgroundImage = ' url(src/tarde.jpeg)'
} else if (horas > 18) {
    img.style.backgroundImage = ' url(src/noite.jpeg)'
} else {img.style.backgroundImage = ' url(src/madrugada.jpg)' }

}
