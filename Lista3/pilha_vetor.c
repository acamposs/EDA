#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *V;
    int N;
    int topo;
} pilha;

void empilha(pilha *p, int x) {
    if (p->topo == p->N) {
        p->N *= 2;
        int *novoV = realloc(p->V, p->N * sizeof(int));
        if (novoV == NULL) {
            return;
        }
        p->V = novoV;
    }

    p->V[p->topo] = x;
    p->topo++;
}

int desempilha(pilha *p, int *y) {
    if (p->topo == 0) {
        return 0;
    }
    p->topo--;
    *y = p->V[p->topo];
    return 1;
}
