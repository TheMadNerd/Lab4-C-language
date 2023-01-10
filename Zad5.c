#include <stdio.h>

void bubble_sort(int a[], int n) {
    int temp, i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main() {
    int a[10], i;

    printf("Podaj 10 liczb: ");
    for (i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

    bubble_sort(a, 10);

 
    printf("Posortowana tablica: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
