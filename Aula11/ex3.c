#include <stdio.h>
#define TAMANHO 4

int main(void){
    float notas[TAMANHO], soma = 0, media;

    for (int i = 0; i < TAMANHO; i++){
        printf("Digite a nota %d do aluno: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }
    media = soma / TAMANHO;

    printf("O total é: %.2f\n", soma);
    printf("A media do aluno é: %.2f\n", media);
    return 0;
}
