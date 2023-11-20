#include <stdio.h>

void imprimirStringAoContrario(char *str) {
    if (*str) {
        imprimirStringAoContrario(str + 1);
        putchar(*str);
    }
}

int main() {
    char str[501];
    
    // Lê a entrada
    scanf("%s", str);
    
    // Chama a função para imprimir a string ao contrário
    imprimirStringAoContrario(str);
    
    return 0;
}
