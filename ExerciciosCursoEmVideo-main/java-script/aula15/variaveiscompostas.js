const contador = []
var letraNumero = 1
var letra = 'a'
var array = []

for (c = 0; c < 12; c++) {



    switch (letraNumero) {
        case 1:
            letra = 'x'
            break
        case 2:
            letra = 'y'
            break
        case 3:
            letra = 'z'
            break
    }
    letraNumero++
    if (letraNumero == 4) {
        letraNumero = 1
    }

    contador[c] = letra
}

contador[contador.length] = 'final'
for (let c = 0; c < contador.length; c++) {
    console.log(contador[c])
    console.log(`== ${c}`)
    array.push(c)
   
}

console.log(array.length)
// array.push(contador)
// array.push(contador.sort())
// console.log(array)

// array[array.length]    = contador
// array[array.length]    = contador.sort()
array.splice(4, 1)
for (c in array) {

console.log(array[c])

}

console.log(array.length)



console.log('===')

var t = []

t[1] = 3

t[7]= 5

t[8] = 6

t[13] = 100

for (let c in t) {
    console.log('1',c)
    console.log(t[c])
}

t.sort()

for (let c = 0; c<10 ; c++) {
    console.log(c,"==",t[c])
}