#include <stdio.h>
#include <stdlib.h>

// Estrutura para representar um estado (andar) na busca em largura
typedef struct {
    int floor;  // Número do andar
    int moves;  // Número de movimentos necessários para alcançar este andar
} State;

int minButtonPresses(int f, int s, int g, int u, int d) {
    int *visited = (int *)calloc(f + 1, sizeof(int)); // Inicializa um vetor de visitados

    State *queue = (State *)malloc((f + 1) * sizeof(State));
    int front = 0, rear = 0;

    queue[rear].floor = s;
    queue[rear].moves = 0;
    rear++;

    visited[s] = 1; // Marca o andar de partida como visitado

    while (front < rear) {
        State current = queue[front];
        front++;

        if (current.floor == g) {
            free(queue);
            free(visited);
            return current.moves; // Encontramos o andar de destino
        }

        int up_floor = current.floor + u;
        int down_floor = current.floor - d;

        if (up_floor <= f && !visited[up_floor]) {
            visited[up_floor] = 1;
            queue[rear].floor = up_floor;
            queue[rear].moves = current.moves + 1;
            rear++;
        }

        if (down_floor >= 1 && !visited[down_floor]) {
            visited[down_floor] = 1;
            queue[rear].floor = down_floor;
            queue[rear].moves = current.moves + 1;
            rear++;
        }
    }

    free(queue);
    free(visited);
    return -1; // Não foi possível alcançar o andar de destino
}

int main() {
    int f, s, g, u, d;
    scanf("%d %d %d %d %d", &f, &s, &g, &u, &d);

    int result = minButtonPresses(f, s, g, u, d);

    if (result == -1) {
        printf("use the stairs\n");
    } else {
        printf("%d\n", result);
    }

    return 0;
}