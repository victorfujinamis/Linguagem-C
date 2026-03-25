#include <stdio.h>

int main() {
    float nota;
    printf("Digite a nota do aluno: ");
    scanf("%f", &nota);
    if(nota >= 6.0) {
        printf("Aluno aprovado!\n");
    }
    if(nota < 6.0) {
        printf("Aluno reprovado!\n");
    }
    return 0;
}
