function verificar() {
    var data = new Date()
    var ano = data.getFullYear()
    var fano = document.getElementById('txtano')
    var res = document.querySelector('div#resp')
if (fano.value.length == 0 || fano.value > ano) {
    alert('ano invalido, reveja os dados.')
} else {
    var fsex = document.getElementsByName('radsex')
    var idade = ano - Number(fano.value) 
    var box = document.createElement('div')
    box.setAttribute('id','123')
    box.setAttribute('class','oxe')
    box.innerText = '@-@'

    var sex = ''
    if (fsex[0].checked) {
        sex = "masculino"
    } else if (fsex[1].checked) {
        sex = 'femenino'
    }

    
     res.innerHTML = `idade de ${idade}, ${sex}`
     res.appendChild(box)
}}
   
   
    