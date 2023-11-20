#include <stdio.h>

void bubblesort (int *v, int l, int r) {
    if (l >= r) {
        return;
    }
    int aux;
    for (int j = 0; j < r; j++) {
        // compara os elementos da lista da esquerda para a direita
        // Complexidade desta parte: O(r - l)
        for (int i = l; i < r; i++) {
            // Compara os elementos para encontrar o menor
            // Complexidade desta parte: O(r - l)
            // if (macro less(v[i], v[min])
            if (v[i] > v[i+1]) {
                // Troca o menor elemento encontrado com o primeiro elemento da sublista
                // Complexidade desta parte: O(1)
                // macro exch(v[i], v[min]);
                aux = v[i];
                v[i] = v[i+1];
                v[i+1] = aux;
            }
        }
    }
}

int main (){
    int v[1000];
    int i = 0;

    while (scanf("%d", &v[i]) != EOF) {
        i++;
    }

    bubblesort(v, 0, i-1);

    for (int k = 0; k < i; k++) {
        printf("%d ", v[k]);
    }
    return 0;
}