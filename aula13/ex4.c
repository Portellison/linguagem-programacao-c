#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
    int num;

    printf("Digite um numero: \n");
    scanf("%d", &num);
    system("clear");
    int j = 1;

    printf("D\n");
    for(int i = 1; i <= num; i++){
        for(int x = num - j; x > 0; x--){
            printf(" ");
        }
        for(int o = 1; o <= i; o++){
            printf("*");
        }printf("\n");
        j++;
        
    }


    printf("A\n");
    for(int i = 1; i <= num; i++){
        for(int o = 1; o <= i; o++){
            printf("*");
        }printf("\n");
            
        
    }



return 0;
}
