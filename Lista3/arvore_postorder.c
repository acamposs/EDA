#include <stdio.h>

typedef struct no
{
    int dado;
    struct no *esq, *dir;
} no;

void pos_ordem(no *raiz)
{
    if(raiz == NULL)
        return;

    no *atual = raiz;
    no *pilha_1[100];
    no *pilha_2[100];
    int topo_1 = -1;
    int topo_2 = -1;

    pilha_1[++topo_1] = atual;

    while(topo_1 >=0)
    {
        atual = pilha_1[topo_1--];
        pilha_2[++topo_2] = atual;

        if(atual->esq != NULL)
            pilha_1[++topo_1] = atual->esq;
        if(atual->dir != NULL)
            pilha_1[++topo_1] = atual->dir;
    }

    while (topo_2 >= 0)
    {
        atual = pilha_2[topo_2--];
        printf("%d ", atual->dado);
    }
    printf("\n");

}