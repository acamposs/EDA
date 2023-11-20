#include <stdio.h>
#include <string.h>

void moveX(char *str, int inicio, int fim) {
    if (inicio >= fim) {
        return;
    }

    if (str[inicio] == 'x') {

        memmove(&str[inicio], &str[inicio + 1], fim - inicio);
        str[fim] = 'x';
        moveX(str, inicio, fim - 1);
    } else {
        moveX(str, inicio + 1, fim);
    }
}

int main() {
    char str[1000]; 

    scanf("%s", str);

    int tamanho = strlen(str);

    moveX(str, 0, tamanho - 1);

    printf("%s\n", str);

    return 0;
}

