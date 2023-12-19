function parimp (n) {
    if (n % 2 == 0) {
        return "par" 
    } else { return "imp"}
}

console.log(parimp(4))


//parametros definidos (se o valor nao for passado, entao é zero)

function soma(n1=0, n2=0) {
    return n1+ n2
}

console.log(soma(10,44))

// colocar uma função em uma variavel