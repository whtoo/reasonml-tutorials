let rec fib = n => {
    switch n {
    | 0 | 1 => 1
    | n => fib(n-1) + fib(n-2)
    }
}

Js.log(fib(15))

let rec gcd = (m,n) => {
    if(m == 0) {
        n;
    } else {
        gcd(n mod m,m)
    }
}

Js.log(gcd(99,363))