#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){

    char senha[] = "azimo", senhauser[50];

    for (int i = 3; i > 0; i--){
        printf("Digite a senha para entrar: \n");
        scanf("%s", senhauser);
        
        int comparacao = strcmp(senha, senhauser);
        
        system("clear");

        if (comparacao == 0){
            printf("\nSeja bem-vindo!\n\n\n");
            break;
        } else{
            printf("Senha errada. Tentativas restantes: %d\n", i - 1);
        }

    }
    




    return 0;
}
