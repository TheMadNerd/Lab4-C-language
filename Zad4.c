#include <stdio.h>
#include <string.h>

int main() {
    char n[100];
    int len, i, flag = 0;

    printf("Podaj liczbe lub slowo: ");
    scanf("%s", n);

    len = strlen(n);

    for (i = 0; i < len; i++) {
        if (n[i] != n[len - i - 1]) {
            flag = 1;
            break;
        }
    }

    if (flag == 0) {
        printf("'%s' jest palindromem.\n", n);
    }
    else {
        printf("'%s' nie jest palindromem.\n", n);
    }

    return 0;
}
