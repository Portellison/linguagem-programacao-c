#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){

    char palavra1[25], palavra2[25];
    system("clear");
    printf("Verificador de anagramas!\n\n");
    printf("Digite duas palavras para saber se são ou não anagramas!\n\n");
    printf("Palavra 1: ");
    scanf("%24s", palavra1);

    printf("\nPalavra 2: ");
    scanf("%24s", palavra2);
    

    int tam1 = strlen(palavra1);
    int tam2 = strlen(palavra2);

    if (tam1 == tam2){
        for (int j = 0; j < tam1; j++){
            for (int k = 0; k < tam1 - 1; k++){
                if (palavra1[k] > palavra1[k + 1]){
                    int temp;
                    temp = palavra1[k];
                    palavra1[k] = palavra1[k+1];
                    palavra1[k+1] = temp;
                }
            }
        }
        for (int j = 0; j < tam2; j++){
            for (int k = 0; k < tam2 - 1; k++){
                if (palavra2[k] > palavra2[k + 1]){
                    int temp;
                    temp = palavra2[k];
                    palavra2[k] = palavra2[k+1];
                    palavra2[k+1] = temp;
                }
            }
        }
        if(!strcmp(palavra1, palavra2)){
            printf("É um anagrama! :)");
        } else {printf("Não é um anagrama!   :(");}
            
    } else {printf("Não é um anagrama!   :(");}


return 0;
}
