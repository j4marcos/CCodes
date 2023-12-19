function fatTxt (x) {
    x = parseInt(x)
    let fatN = x
    let fat = ""
    for (let c = 1 ; c < fatN ; c++) {
        fat += `${x} x `
        x -- 
    }

    fat += "1"
    return fat
}



function fat (x=1) {
    x = parseInt(x)
    let fatN = x
    let fat = 1
    for (let c = 1 ; c < fatN ; c++) {
        fat = fat * x
        x -- 
    }

    return fat

}

console.log(fatorial(5))


function fatA(n) {
    let fat = 1
    for(let c = n ; c > 1 ; c--) {
        fat *= c
    }
    return fat
}

// recursividade 
function fatorial(n) {
    if (n==1) {
        return 1
    } else {
        return n * fatorial(n-1)
    }
}