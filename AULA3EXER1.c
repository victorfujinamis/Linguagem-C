#include <stdio.h>

int main() {
    int x, y;
    printf("Digite o valor de x: ");
    scanf("%d", &x);
    printf("Digite o valor de y: ");
    scanf("%d", &y);
    if(x == y) {
        printf("x igual a y\n");
    }
    if(x != y) {
        printf("x diferente de y\n");
    }
    return 0;
}
