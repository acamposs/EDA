#include <stdio.h>
#include <stdlib.h>

typedef struct fila {
    int *dados;
    int N, p, u;
} fila;

int enfileira(fila *f, int x) {
    if (f->u == f->N) {
        f->dados = realloc(f->dados, 2 * f->N * sizeof(int));
        if (f->dados == NULL)
            return 0;

        for (int i = f->N; i < 2 * f->N; i++)
            f->dados[i] = 0;

        f->N *= 2;
    }

    f->dados[f->u] = x;
    f->u++;
    return 1;
}
