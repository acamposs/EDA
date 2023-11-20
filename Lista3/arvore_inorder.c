#include <stdio.h>

typedef struct no
{
    int dado;
    struct no *esq, *dir;
} no;

void em_ordem(no *raiz)
{
    if (raiz == NULL)
        return;

    no *novo = raiz;
    no *pilha[100];
    int topo = -1;

    while (1)
    {
        while (novo != NULL)
        {
            pilha[++topo] = novo;
            novo = novo->esq;
        }
        if (topo >= 0)
        {
            novo = pilha[topo--];
            printf("%d ", novo->dado);
            novo = novo->dir;
        }
        else
            break;
    }
    printf("\n");
}

