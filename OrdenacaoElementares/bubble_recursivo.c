#include <stdio.h>

void bubblesort (int *v, int l, int r) {
    if (l >= r) {
        return;
    }
    int aux;
    for (int j = 0; j < r; j++) {
        for (int i = l; i < r; i++) {
            if (v[i] > v[i+1]) {
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