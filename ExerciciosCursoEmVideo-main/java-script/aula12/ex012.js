var agora =  new Date()
var horas = agora.getHours()
var minutos = agora.getMinutes()

if (horas > 5 && horas < 12 ) {
    var bomdia = 'bom dia'
} else if (horas >= 12 && horas < 18) {
    var bomdia = "boa tarde"
} else if (horas > 18) {
    var bomdia = "boa noite"
} else {var bomdia = 'Deus ajuda quem cedo madruga'}

console.log(`agora são ${horas}:${minutos}, ${bomdia}!`)
