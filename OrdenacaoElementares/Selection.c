#include <stdio.h>
void selectionsort(int *v, int l, int r) {
    if (l >= r) {
        return;
    }
    int i, aux;
    int min = l;

    for (i = l+1; i <= r; i++) {
        // if (macro less(v[i], v[min])
        if (v[i] < v[min]) {
            min = i;
        }
    }
        // macro exch(v[i], v[min]);
        aux = v[min];
        v[min] = v[l];
        v[l] = aux;
        selectionsort(v, l+1, r);
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