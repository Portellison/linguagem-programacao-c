#include <stdio.h>

int main() {
    int num, soma = 0;

    printf("Digite um numero: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i += 2) {
        soma += i;
    }

    printf("A soma dos numeros impares de 1 ate %d é: %d\n", num, soma);

    return 0;
}