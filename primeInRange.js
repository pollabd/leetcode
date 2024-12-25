function isPrime(num) {
    if (num < 1) return false

    for (let i = 2; i*i <= num ; i++){
        if(num % i === 0) return false
    }

    return true
}

function countPrimesInRange(start,end){
    let primeCount = 0

    for (let i = start; i< end; i++){
        if(isPrime(i)){
            primeCount++;
        }
    }

    return primeCount
}

console.log(countPrimesInRange(10,50));