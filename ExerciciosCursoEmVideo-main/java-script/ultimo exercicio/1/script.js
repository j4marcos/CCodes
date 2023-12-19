const listN = []

function adicionar() {
    document.getElementById('resptext').innerHTML = ""
    let novoN = document.getElementById('novonumero').value
    let registro = document.getElementById('listadeN')

    listN.forEach((item) => { if (item == novoN) { novoN = "repetido" } })



    if (novoN == "") { alert('insira um numero') }
    else if (novoN < 1 || novoN > 100) {
        alert('insira um numero valido!')
    } else if (novoN == "repetido") { alert("este número ja foi adicionado!") }
    else {
        listN.push(novoN)

        let registroN = document.createElement('option')
        registroN.id = listN.length
        registroN.innerHTML = `${listN.length}  ===  ${novoN}`
        registro.appendChild(registroN)

    }


    document.getElementById('novonumero').value = ""
}

function finalizar() {
    document.getElementById('resptext').innerHTML = ""
    if (listN == "") { alert('adicione numeros primeiro!') } else {
        let analize = []
        let maiorN = listN[0]
        let menorN = listN[0]
        let mediaN = 0
        let somaN = 0

        for ( let c = 0; c < listN.length; c++ ) {
            if  (listN[c] > maiorN) {
                maiorN = listN[c]
            }
            if  (listN[c] < menorN) {
                menorN = listN[c]
            }
            somaN += +listN[c]
        }
        mediaN = somaN/listN.length

        analize.push(`${listN.length} numeros foram adicionados`)
        analize.push(`O maior numero é ${maiorN}`)
        analize.push(`O menor numero é ${menorN}`)
        analize.push(`A media dos numeros é ${mediaN.toFixed(2)}`)
        analize.push(`A soma dos numeros é ${somaN}`)

        analize.forEach(a => {
            let p = document.createElement('p')
            p.classList.add('analizeDosNumeros')
            p.innerHTML = a
            document.getElementById('resptext').appendChild(p)

        });
    }
}
