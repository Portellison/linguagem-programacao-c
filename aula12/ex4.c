#include <stdio.h>
#include <string.h>

int main() {
    char palavra[6], *posicao, letra;
    printf("Digite uma palavra de 5 letras: ");
    scanf("%s", palavra);

    for (int i = 3; i > 0; i--){
    printf("Digite uma letra: ");
    scanf(" %c", &letra);
    posicao = strchr(palavra, letra);
        if(posicao != NULL){
            printf("A letra está na palavra!\nEncerrando o programa...\n");
            break;
        }
        else{
            printf("A letra não está na palavra!\n");
            printf("Tentativas restantes: %d\n", i - 1);
        }
    }
  return 0;
}  
