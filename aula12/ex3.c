#include <stdio.h>

int main(void){

    char senha[50] = "azimo", senhauser[50];
    int tentativas = 3, soma = 0;

    for (tentativas = 3; tentativas > 0; tentativas--){
        printf("Digite a senha: ");
        scanf("%49s", senhauser);

        if (senha[0] == senhauser[0] && senha[1] == senhauser[1] && senha[2] == senhauser[2] && senha[3] == senhauser[3] && senha[4] == senhauser[4] && senha[5] == senhauser[5]){
            printf("Seja bem vindo!\n");
            break;
        }
        else{
            printf("Senha incorreta!\n");
            printf("Tentativas restantes: %d\n", tentativas - 1);
        }

    }

    return 0;
}
