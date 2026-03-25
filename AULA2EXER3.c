#include <stdio.h>

int main() {
    int quantidade = 5;
    float preco_unitario = 3.50;
    float total = quantidade * preco_unitario;
    printf("Produto: Chocolate\n");
    printf("Quantidade: %d\n", quantidade);
    printf("Preco por unidade: R$ %.2f\n", preco_unitario);
    printf("O valor total e: R$ %.2f\n", total);
    return 0;
}
