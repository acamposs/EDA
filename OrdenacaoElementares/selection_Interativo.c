#include <stdio.h>

//INTERATIVO
void selectionsort(int *v, int l, int r) {
    if (l >= r) {
        return;
    }

    int i, j, aux;
    // percorre a lista da esquerda para a direita
    // Complexidade desta parte: O(r - l)
    for (j = l; j < r; j++) {

        int min = j;

        for (i = j+1; i <= r; i++) {
            // Compara os elementos para encontrar o menor
            // Complexidade desta parte: O(r - l)
            // if (macro less(v[i], v[min])
            if (v[i] < v[min]) {
                min = i;
            }
        }
        // Troca o menor elemento encontrado com o primeiro elemento da sublista
        // Complexidade desta parte: O(1)
        // macro exch(v[i], v[min]);
        aux = v[min];
        v[min] = v[l];
        v[l] = aux;
     // complexidade total: O(n)*O(n)*O(1) = O(n*n*1) = O(n^2), onde n = r - l
    }
}   

int main (){
    int v[1000];
    int i = 0;

    while (scanf("%d", &v[i]) != EOF) {
        i++;
    }

    selectionsort(v, 0, i-1);

    for (int j = 0; j < i; j++) {
        printf("%d ", v[j]);
    }
    return 0;
}
