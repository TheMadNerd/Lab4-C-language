#include <stdio.h>

int main() {
    int a[10], i, j;
    int repeat[10] = {0}; 
    for (i = 0; i < 10; i++) {
        printf("Podaj liczbe: ");
        scanf("%d", &a[i]);
    }

    
    for (i = 0; i < 10; i++) {
        for (j = i + 1; j < 10; j++) {
            if (a[i] == a[j]) {
                repeat[i] = 1;
            }
        }
    }

    printf("Liczby, ktore sie powtorzyly: ");
    for (i = 0; i < 10; i++) {
        if (repeat[i] == 1) {
            printf("%d ", a[i]);
        }
    }
    printf("\n");

    return 0;
}
