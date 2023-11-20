#include <stdio.h>

typedef struct no
{
    int dado;
    struct no *esq, *dir;
} no;

void pre_ordem(no* raiz)
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
            printf("%d ", novo->dado);
            novo = novo->esq;
        }
        
        if (topo >= 0)
        {
            novo = pilha[topo--];
            novo = novo->dir;
        }
        else
            break;
    }
    printf("\n");
}