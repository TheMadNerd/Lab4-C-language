#include <stdio.h>

int main() {
    int a[10], b[10], i;

    
    for (i = 0; i < 10; i++) {
        printf("Podaj liczbe numer %d: ",i+1);
        scanf("%d", &a[i]);
    }

    
    for (i = 0; i < 10; i++) {
        b[i] = a[i];
    }


    printf("Zawartosc drugiej tablicy : ");
    for (i = 0; i < 10; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");

    return 0;
}
