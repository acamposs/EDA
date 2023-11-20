#include <stdio.h>
#include <stdlib.h>

int podeReordenar(int *sequencia, int n) {
    int esperado = 1;
    int *pilha = (int *)malloc(sizeof(int) * n);
    int topo = 0;
    
    for (int i = 0; i < n; i++) {
        if (sequencia[i] == esperado) {
            esperado++;
        } else if (topo > 0 && pilha[topo - 1] == esperado) {
            topo--;
            esperado++;
            i--;
        } else {
            pilha[topo++] = sequencia[i];
        }
    }

    while (topo > 0) {
        if (pilha[topo - 1] == esperado) {
            topo--;
            esperado++;
        } else {
            return 0;
        }
    }

    free(pilha);
    return 1;
}

int main() {
    int n;

    while (1) {
        scanf("%d", &n);

        if (n == 0) {
            break;
        }

        int *sequencia = (int *)malloc(sizeof(int) * n);
        for (int i = 0; i < n; i++) {
            scanf("%d", &sequencia[i]);
        }

        int possivel = podeReordenar(sequencia, n);

        if (possivel) {
            printf("yes\n");
        } else {
            printf("no\n");
        }

        free(sequencia);
    }

    return 0;
}
