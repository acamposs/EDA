#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    int dado;
    struct celula *prox;
} celula;

celula *busca(celula *le, int x) {
    celula *atual = le->prox; // Começa do primeiro elemento da lista (ignorando o nó cabeça)

    while (atual != NULL) {
        if (atual->dado == x) {
            return atual; // Retorna o ponteiro para a célula que contém x
        }
        atual = atual->prox;
    }

    return NULL; // Retorna NULL se não encontrar x na lista
}

celula *busca_rec(celula *le, int x) {
    if (le->prox == NULL) {
        return NULL; // Lista vazia, retorna NULL
    }

    if (le->prox->dado == x) {
        return le->prox; // Retorna o ponteiro para a célula que contém x
    }

    return busca_rec(le->prox, x); // Chama a função recursivamente com a próxima célula
}