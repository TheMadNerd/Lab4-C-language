#include <stdio.h>

int main() {
    long long int n;
    int repeat[100] = {0}; 
    
    printf("Podaj liczbe calkowita: ");
    scanf("%lld", &n);

   
    long long int temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        if (repeat[digit] == 1) {
            printf("Cyfra %d sie powtorzyla\n", digit);
        }
        repeat[digit] = 1;
        temp /= 10;
    }
    return 0;
}
