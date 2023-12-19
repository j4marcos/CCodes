
function contar() {
    var ini = document.getElementById('input-ini')
    var fim = document.getElementById('input-fim')
    var passo = document.getElementById('input-passo')
    var resp = document.getElementById('resp')

if (passo.value == "") {
    passo.value = 1
}

    if (ini.value == '' || fim.value == '' || passo.value == '' || passo.value == 0) {
        alert('preencha todas as caixas com numeros validos.')
    } else {


        if (Number(ini.value) > Number(fim.value)) {
            resp.innerHTML = "&#9199"
            for (var c = Number(ini.value); c >= Number(fim.value); c -= Number(passo.value)) {

                if (c == fim.value) {
                    resp.innerHTML += ` ${c}&#x23F8`
                } else {
                    resp.innerHTML += ` ${c}&#9193`
                }

            }} else {
                resp.innerHTML = "&#9199"
                for (var c = ini.value; c <= fim.value; c = Number(c) + (Number(passo.value))) {

                    if (c == fim.value) {
                        resp.innerHTML += ` ${c}&#x23F8`
                    } else {
                        resp.innerHTML += ` ${c}&#9193`
                    }
                }
            }

        

    }

}