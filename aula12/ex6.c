#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int main(void){
    char completo[50], segundo[50];

    printf("Digite seu primeiro nome: \n");
    scanf("%s", completo);

    printf("Digite seu sobrenome: \n");
    scanf("%s", segundo);

    strcat(completo, "  ");
    strcat(completo, segundo);

    printf("Seu nome completo é: %s\n", completo);

    return 0;
}
