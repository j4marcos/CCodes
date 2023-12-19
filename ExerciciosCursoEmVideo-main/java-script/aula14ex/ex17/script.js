



function gerar() {
    var num = document.getElementById('num').value
    var box = document.getElementById('taboada')


    if (num == "") { alert('insira um valor valido!') }
    else {
    box.innerHTML = ""
        for ( c = 1 ; c <= 10 ; c++) {
            box.innerHTML += `${Number(num)} x ${c} = ${Number(num) * c} <br>`
        }
    }

}