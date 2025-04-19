#include <stdio.h>

int subtrai3(int x);

int main(){

    int numero;

    printf("Digite um inteiro: ");
    scanf("%d", &numero);

    printf("\nNumero recebido: %d\n", numero);

    int resultado = subtrai3(numero);
    printf("Resultado: %d\n", resultado);
    printf("Atual: %d", numero);

    return 0;
}

int subtrai3(int x){    
    

 return x - 3;
}