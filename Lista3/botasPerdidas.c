#include <stdio.h>

int main() {
    int tamanho, pares = 0;
    int contagemDireito[31] = {0};
    int contagemEsquerdo[31] = {0};

    while (scanf("%d", &tamanho) != EOF) {
        char pe;
        scanf(" %c", &pe);

        if (pe == 'D') {
            contagemDireito[tamanho - 30]++;
        } else if (pe == 'E') {
            contagemEsquerdo[tamanho - 30]++;
        }
    }

    for (int i = 0; i < 31; i++) {
        pares += (contagemDireito[i] < contagemEsquerdo[i]) ? contagemDireito[i] : contagemEsquerdo[i];
    }

    printf("%d\n", pares);

    return 0;
}
