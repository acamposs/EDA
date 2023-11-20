long int fib[81];

long int fibonacci(int n) {

   if (n <= 1) {
        return n; 

    } else if (fib[n] != 0) {
        return fib[n];
    }

    fib[n] = fibonacci(n - 1) + fibonacci(n - 2);
    return fib[n];
}

