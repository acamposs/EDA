#include <stdio.h>

int somaDosDigitos(long long n) {
    if (n == 0) {
        return 0;
    }
    return n % 10 + somaDosDigitos(n / 10);
}

int main() {
    long long n;
    scanf("%lld", &n);
    int resultado = somaDosDigitos(n);
    printf("%d\n", resultado);
    return 0;
}
