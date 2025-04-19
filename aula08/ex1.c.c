#include <stdio.h>

int main(){

    int num = 7, adv, contador = 1, tentativas;
    
    do{
        printf("Tente adivinhar o número que estou pensando\n");
        scanf("%d", &adv);

        tentativas = 3 - contador;

        if(adv == num){
            printf("Você acertou!\n");
            }
     
        else{
            if(tentativas == 0){printf("Fim de jogo!\n");}
            printf("Número errado. tentativas restantes: %d\n", tentativas);
        }
        contador++;
    }while(adv != num);

    return 0;
}