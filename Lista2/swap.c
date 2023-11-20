#include <stdio.h>

void swap (int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;

}
int main (){
    int x;
    int y;
    scanf("%d %d", &x, &y);

    printf("Antes: %d %d\n", x, y);

    swap(&x, &y);

    printf("Depois: %d %d\n", x, y);

    return 0;
}