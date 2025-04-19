#include <stdio.h>

int main(){

    int num, soma = 0;

    do{

        printf("Digite o número sorteado no dado: \n");
        scanf("%d", &num);
        
            if(num % 2 == 0){
                soma += num;
            }
            else{ 
                printf("Fim de jogo!\nSoma dos números pares: %d", soma);
                break;
            }

    }while(0 == 0);

    return 0;
}