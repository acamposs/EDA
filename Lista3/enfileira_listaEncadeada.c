#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    int dado;
    struct celula *prox;
} celula;

celula *enfileira(celula *f, int x) {
    celula *novaCelula = malloc(sizeof(celula));
    if (novaCelula == NULL|| f == NULL) {
        return NULL;
    }

    novaCelula->prox = f->prox;
    f->prox = novaCelula;
    f->dado = x;
    f = novaCelula;

    return novaCelula;
}
