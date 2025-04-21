#include <stdio.h>
#include "igualdade.h"

int lerNumero() {
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    return n;
}

int main() {
    int num1 = lerNumero();
    int num2 = lerNumero();
    int num3 = lerNumero();

    int maiorTemp = maior(num1, num2);
    int maiorFinal = maior(maiorTemp, num3);

    printf("Maior: %d\n", maiorFinal);

    return 0;
}
