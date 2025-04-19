#include <stdio.h>

void subtrai3(int *x);

int main(){

    int numero;

    printf("Digite um inteiro: ");
    scanf("%d", &numero);

    printf("\nNumero recebido: %d\n", numero);

    subtrai3(&numero);
    printf("Resultado: %d\n", numero);
    printf("Atual: %d", numero);

    return 0;
}

void subtrai3(int *x){    
    
 *x -= 3;
}
