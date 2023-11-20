#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    int dado;
    struct celula *prox;
} celula;

void insere_inicio(celula *le, int x) {
    celula *insert = (celula *)malloc(sizeof(celula));
    insert->dado = x;
    insert->prox = le->prox;
    le->prox = insert;
}

void insere_antes(celula *le, int x, int y) {
    celula *atual = le;

    while (atual->prox != NULL) {
        if (atual->prox->dado == y) {
            celula *insert = (celula *)malloc(sizeof(celula));
            insert->dado = x;
            insert->prox = atual->prox;
            atual->prox = insert;
            return;
        }
        atual = atual->prox;
    }

    celula *insert = (celula *)malloc(sizeof(celula));
    insert->dado = x;
    insert->prox = NULL;
    atual->prox = insert;
}