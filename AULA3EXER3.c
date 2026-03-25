#include <stdio.h>

int main() {
    float nota;
    printf("Digite a nota do aluno: ");
    scanf("%f", &nota);
    
    if(nota >= 9.0) {
        printf("Conceito: A\n");
    }
    else if(nota >= 8.0) {
        printf("Conceito: B\n");
    }
    else if(nota >= 7.0) {
        printf("Conceito: C\n");
    }
    else if(nota >= 6.0) {
        printf("Conceito: D\n");
    }
    else if(nota < 6.0) {
        printf("Conceito: E\n");
    }
    return 0;
}
