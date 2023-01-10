#include <stdio.h>

int main() {
    int numbers[10];
    int i, j, minIndex, temp;

    printf("Wprowadź 10 liczb: ");
    for (i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
    }

    for (i = 0; i < 9; i++) {
        minIndex = i;
        for (j = i+1; j < 10; j++) {
            if (numbers[j] < numbers[minIndex]) {
                minIndex = j;
            }
        }
        temp = numbers[i];
        numbers[i] = numbers[minIndex];
        numbers[minIndex] = temp;
    }

    printf("Posortowane liczby: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", numbers[i]);
    }

    return 0;
}
