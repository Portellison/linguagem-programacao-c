#include <stdio.h>
#include <string.h>


int main(void){

    int num[5] = {9, 2, 4, 7, 13};


    printf("Antes: ");

    for(int i = 0; i < 5; i++){
    printf("%d ", num[i]); 
    } printf("\n\n\n");


    for (int j = 0; j < 4; j++){
        for (int k = 0; k < 4 - j; k++){
            if (num[k] > num[k + 1]){
                int temp;
                temp = num[k];
                num[k] = num[k+1];
                num[k+1] = temp;
            }
        }
    }

    printf("Depois: ");

    for(int i = 0; i < 5; i++){
    printf("%d ", num[i]); 
    } printf("\n");

return 0;
}
