#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 100000

char pilha[MAX_SIZE];
int topo = -1;

void empilhar(char c) {
    topo++;
    pilha[topo] = c;
}

void desempilhar() {
    topo--;
}

bool estaBemDefinida(char s[]) {
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
            empilhar(s[i]);
        } else if ((s[i] == ')' && topo >= 0 && pilha[topo] == '(') ||
                   (s[i] == ']' && topo >= 0 && pilha[topo] == '[') ||
                   (s[i] == '}' && topo >= 0 && pilha[topo] == '{')) {
            desempilhar();
        } else {
            return false;
        }
    }

    return topo == -1;
}

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 0; t < T; t++) {
        char expressao[MAX_SIZE];
        scanf("%s", expressao);

        topo = -1;
        if (estaBemDefinida(expressao)) {
            printf("S\n");
        } else {
            printf("N\n");
        }
    }

    return 0;
}
