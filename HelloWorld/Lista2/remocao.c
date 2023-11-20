#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    int dado;
    struct celula *prox;
} celula;

int remove_depois(celula *p) {
    if (p == NULL || p->prox == NULL) {
        return 0; // Não é possível remover o próximo elemento
    }

    celula *temp = p->prox;
    p->prox = temp->prox;
    free(temp);
    return 1; // Remoção bem-sucedida
}

void remove_elemento(celula *le, int x) {
    celula *anterior = le;
    celula *atual = le->prox;

    while (atual != NULL) {
        if (atual->dado == x) {
            anterior->prox = atual->prox;
            free(atual);
            return; // Removemos a primeira ocorrência de x
        }

        anterior = atual;
        atual = atual->prox;
    }
}

void remove_todos_elementos(celula *le, int x) {
    celula *anterior = le;
    celula *atual = le->prox;

    while (atual != NULL) {
        if (atual->dado == x) {
            anterior->prox = atual->prox;
            free(atual);
            atual = anterior->prox;
        } else {
            anterior = atual;
            atual = atual->prox;
        }
    }
}

int main() {
    // Exemplo de uso:
    celula *lista = (celula *)malloc(sizeof(celula));
    lista->prox = NULL;

    // Inserir elementos na lista (para teste)
    celula *atual
