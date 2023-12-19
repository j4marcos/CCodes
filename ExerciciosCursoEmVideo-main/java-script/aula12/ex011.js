// //condição aninhada
// var idade = 17
// if (idade < 16) {
//     console.log('não vota')
// } else {

//     if ( idade < 18 ) {
//         console.log('voto opcional')
//     } else {
//        console.log ('tem que votar')
//     }

// }

//condição 

var idade = 24
if (idade < 16) {
    console.log('não vota')
} else if ( idade < 18 || idade > 65 ) {
        console.log('voto opcional')
} else if ( idade == 24 ) {
    console.log('continua tendo que votar')
} else {
       console.log ('tem que votar')
     }
    

