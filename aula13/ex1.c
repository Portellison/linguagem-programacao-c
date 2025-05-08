#include <stdio.h>
#include <string.h>


void palindromo(char palavra[]);


int main(void){

    char palavra [11], copia[11];
    puts("Digite uma palavra para descobrir se é um palíndromo:\n");
    scanf("10%s", palavra);
    strcpy(copia, palavra);
    palindromo(copia);
    
    if (strcmp(palavra, copia) == 0){
        puts("É um palíndromo!");
    } else {
        puts("Não é um palíndromo!");
    }

return 0;
}

void palindromo(char palavra[]){
    int i, j;
    char temp;
    int tamanho = strlen(palavra);

    for (i = 0, j = tamanho - 1; i < j; i++, j--){
        
        temp = palavra[i];
        palavra[i] = palavra[j];
        palavra[j] = temp;
    }
}
