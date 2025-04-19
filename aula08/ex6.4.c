#include <stdio.h>

int testa_par(int x){
    if(x % 2 == 0){return 1;}
    else{return 0;}
}

int main(){
    int num;
    printf("Digite um valor para saber se e par: ");


    for(int i = 0; i <= 10; i++){

    scanf("%d", &num);

    int resultado = testa_par(num);

    printf("\n%d � par? %d\n", num, resultado);
    };


    return 0;
}
