#include <stdio.h>
#include <string.h>

int main(void){

    char senha[20];
    int tamanho, i = 0;


do{
    printf("Cadastre sua nova senha (minimo de 8 caracteres): \n");
    scanf("%s", senha);

    tamanho = strlen(senha);
    
    if (tamanho < 8){
        printf("Tamanho de senha invalido, tente novamente.\n");
    }else{
        printf("Senha cadastrada com sucesso!\n");
        i = 1;
    }
}while(i == 0);


    return 0;
}
