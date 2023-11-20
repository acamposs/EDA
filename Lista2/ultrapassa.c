#include <stdio.h>

void printLastValues(int *arr, int index, int limit, int total, int count) {
    if (index == count) return;

    total += arr[index];
    
    if (total > limit) {
        printLastValues(arr, index + 1, limit, 0, count);
        printf("%d\n", arr[index]);

    } else {
        printLastValues(arr, index + 1, limit, total, count);

    }

}

int main() {
    int num, array[150000], count = 0;
    
    while (scanf("%d", &num) && num != 0) array[count++] = num;
    
    scanf("%d", &num);
    
    printLastValues(array, 0, num, 0, count);
    
    return 0;
    
}
