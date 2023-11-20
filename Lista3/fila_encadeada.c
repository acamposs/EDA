#include <stdio.h>
#include <stdlib.h>

typedef struct celula{
    int dado;
    struct celula *prox;
} celula;

void enfileira (celula **f, int x){

    celula *inserido = malloc(sizeof(celula));

    inserido->prox = (*f)->prox;
    (*f)->prox = inserido;
    (*f)->dado = x;
    (*f) = inserido;
}


int desenfileira(celula *f, int *y){
    
    celula *removido = f->prox;
    *y = removido->dado;

    if (f->prox == f){
        return 0;
    }else{
        f->prox = removido->prox;

    return 1;
    }
    
}