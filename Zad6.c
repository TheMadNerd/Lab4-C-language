#include <stdio.h>

int main() {
    int numbers[10];
    int i, j, temp;

    printf("Wprowadź 10 liczb: ");
    for (i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
    }

    for (i = 1; i < 10; i++) {
        for (j = i; j > 0 && numbers[j-1] > numbers[j]; j--) {
            temp = numbers[j];
            numbers[j] = numbers[j-1];
            numbers[j-1] = temp;
        }
    }

    printf("Posortowane liczby: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", numbers[i]);
    }

    return 0;
}