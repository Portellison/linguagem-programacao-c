#include <stdio.h>
#include "igualdade.h"

int main() {
    int num1, num2;

    printf("Digite um numero: ");
    scanf("%d", &num1);

    printf("Digite um numero: ");
    scanf("%d", &num2);

    if (igual(num1, num2)) {
        printf("Iguais: sim\n");
    } else {
        printf("Iguais: nao\n");
        printf("Maior: %d\n", maior(num1, num2));
        printf("Menor: %d\n", menor(num1, num2));
    }

    return 0;
}
