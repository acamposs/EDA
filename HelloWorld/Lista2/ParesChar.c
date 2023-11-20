#include <stdio.h>


int contarPares(char* str, char anterior, char anteriorAnterior) {
    if (str[0] == '\0') {
        return 0;
    }

    if (str[0] == anteriorAnterior) {

        return 1 + contarPares(str + 1, str[0], anterior);
    }


    return contarPares(str + 1, str[0], anterior);
}

int main(void) {
    char a[201];
    scanf("%s", a); 
    int resultado = contarPares(a, '\0', '\0');
    printf("%d\n", resultado); 

    return 0;
}

