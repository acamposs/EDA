#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    int dado;
    struct celula *prox;
} celula;

void empilha(celula *p, int x);
int desempilha(celula *p, int *y);

void empilha(celula *p, int x) {
    celula *novaCelula = (celula *)malloc(sizeof(celula));
    if (novaCelula == NULL) {
        return;
    }

    novaCelula->dado = x;
    novaCelula->prox = p->prox;
    p->prox = novaCelula;
}

int desempilha(celula *p, int *y) {
    if (p->prox == NULL) {
        return 0; 
    }

    celula *temp = p->prox;
    *y = temp->dado;
    p->prox = temp->prox;
    free(temp);
    return 1;
}
