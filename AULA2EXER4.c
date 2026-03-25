#include <stdio.h>

int main() {
    float reais = 50.00;
    float cotacao_dolar = 5.22;
    float quantidade_dolares = reais / cotacao_dolar;
    printf("Valor em Reais: R$ %.2f\n", reais);
    printf("Cotacao do Dolar: R$ %.2f\n", cotacao_dolar);
    printf("Quantidade de Dolares: $ %.2f\n", quantidade_dolares);
    return 0;
}
