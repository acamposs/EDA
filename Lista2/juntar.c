#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    int dado;
    struct celula *prox;
} celula;

void mescla_listas(celula *l1, celula *l2, celula *l3) {
    celula *temp_l1 = l1->prox;
    celula *temp_l2 = l2->prox;
    celula *temp_l3 = l3;

    while (temp_l1 != NULL && temp_l2 != NULL) {
        if (temp_l1->dado < temp_l2->dado) {
            temp_l3->prox = temp_l1;
            temp_l1 = temp_l1->prox;
        } else {
            temp_l3->prox = temp_l2;
            temp_l2 = temp_l2->prox;
        }
        temp_l3 = temp_l3->prox;
    }


    while (temp_l1 != NULL) {
        temp_l3->prox = temp_l1;
        temp_l1 = temp_l1->prox;
        temp_l3 = temp_l3->prox;
    }

    while (temp_l2 != NULL) {
        temp_l3->prox = temp_l2;
        temp_l2 = temp_l2->prox;
        temp_l3 = temp_l3->prox;
    }
}