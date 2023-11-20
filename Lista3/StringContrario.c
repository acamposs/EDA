#include <stdio.h>
#include <string.h>

#include <stdio.h>
#include <string.h>

void inverterString(char *str, int i) {
    int tamanho = strlen(str);
    if (i < tamanho / 2) {
        char temp = str[i];
        str[i] = str[tamanho - 1 - i];
        str[tamanho - 1 - i] = temp;
        inverterString(str, i + 1);
    }
}

int main() {
    char string[501];  

    scanf("%s", string);

    inverterString(string, 0);

    printf("%s\n", string);

    return 0;
}
