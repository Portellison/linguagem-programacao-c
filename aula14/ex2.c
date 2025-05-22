#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void palindromo(char *palavra);

int main(void){

    printf("Digite uma palavra para saber se é palindromo:");
    char palavra[100];
    scanf("%s", palavra);

    palindromo(palavra);





return 0;
}

void palindromo(char *palavra) {
    char *inicio = palavra;
    char *fim = palavra + strlen(palavra) - 1; 

    int e_palindromo = 1;

    while (inicio < fim) {
        if (*inicio != *fim) {
            e_palindromo = 0;
            break;
        }
        inicio++;
        fim--;
    }

    if (e_palindromo) {
        printf("A palavra é um palíndromo.\n");
    } else {
        printf("A palavra não é um palíndromo.\n");
    }
}
