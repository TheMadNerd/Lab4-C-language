#include <stdio.h>
#include <string.h>

void encrypt(char *str, int key) {
    int i;
    for (i = 0; i < strlen(str); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = ((str[i] - 'a') + key) % 26 + 'a';
        }
        else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = ((str[i] - 'A') + key) % 26 + 'A';
        }
    }
}

void decrypt(char *str, int key) {
    int i;
    for (i = 0; i < strlen(str); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = ((str[i] - 'a') - key + 26) % 26 + 'a';
        }
        else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = ((str[i] - 'A') - key + 26) % 26 + 'A';
        }
    }
}

int main() {
    char str[100];
    int key, choice;

    printf("Wprowadź wiadomość: ");
    scanf("%s", str);

    printf("Wybierz 1 dla szyfrowania, 2 dla deszyfrowania: ");
    scanf("%d", &choice);

    printf("Wprowadź klucz (liczba całkowita): ");
    scanf("%d", &key);

    if (choice == 1) {
        encrypt(str, key);
        printf("Zaszyfrowana wiadomość: %s\n", str);
    } else if (choice == 2) {
        decrypt(str, key);
        printf("Odszyfrowana wiadomość: %s\n", str);
    } else {
        printf("Nieznana opcja!");
    }

    return 0;
}
