#include <stdio.h>

void substituiXY(char *texto, int indice) {
    if (texto[indice] == '\0') {
        return;
    }

    if (texto[indice] == 'x') {
        texto[indice] = 'y';
    }

    substituiXY(texto, indice + 1);
}

int main() {
    char texto[81];
    scanf("%s", texto);

    substituiXY(texto, 0);

    printf("%s\n", texto);

    return 0;
}
