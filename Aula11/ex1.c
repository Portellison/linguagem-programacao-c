#include <stdio.h>
#define TAMANHO 5
int main(void){
    int num[TAMANHO] = {10, 11, 12, 13, 14};


    

    for (int i = 0; i < TAMANHO; i++){
        printf("Vetor[%d] = %d\n", i, num[i]);
    }



    return 0;
}
