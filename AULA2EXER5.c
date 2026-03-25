#include <stdio.h>

int main() {
    char letra;
    printf("Alfabeto em Maiusculas:\n");
    for(letra = 'A'; letra <= 'Z'; letra++) {
        printf("%c ", letra);
    }
    printf("\n");
    return 0;
}
