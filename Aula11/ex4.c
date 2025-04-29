#include <stdio.h>
#define TAMANHO 2

float media(float numeros[TAMANHO]);
float dobro(float numeros[TAMANHO]);
void maior(float numeros[TAMANHO]);



int main(void){

    float numeros[TAMANHO], M;

    for (int i = 0; i < TAMANHO; i++){
        printf("Digite o %d valor:\n", i + 1);
        scanf("%f", &numeros[i]);
    }

    for(int i = 0; i < TAMANHO; i++){
        printf("Vetor[%d] antes: %.2f\n", i, numeros[i]);
    }
    M = media(numeros);

    printf("A media é: %.2f\n", M);

    M = dobro(numeros);

    printf("A nova media é: %.2f\n", M);

    for(int i = 0; i < TAMANHO; i++){
        printf("Vetor[%d] depois: %.2f\n\n", i, numeros[i]);
    }

    printf("Antes de inverter: %.2f, %.2f\n", numeros[0], numeros[1]);
    maior(numeros);
    printf("Depois de inverter: %.2f, %.2f\n", numeros[0], numeros[1]);

    return 0;
}


float media(float numeros[TAMANHO]){
    float soma = 0;
    for (int i = 0; i < TAMANHO; i++){
        soma += numeros[i];
    }
    return soma / TAMANHO;
}

float dobro(float numeros[TAMANHO]){
    for (int i = 0; i < TAMANHO; i++){
        numeros[i] *= 2;
    }
    float soma = 0;
    for (int i = 0; i < TAMANHO; i++){
        soma += numeros[i];
    }
    return soma / TAMANHO;
}

void maior(float numeros[TAMANHO]){
    if (numeros[0] < numeros[1]){
    float temp = numeros[0];
    numeros[0] = numeros[1];
    numeros[1] = temp;}      
}
