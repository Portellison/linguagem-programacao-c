#include <stdio.h>

int main(void){

    int nota1, nota2, nota3, nota4;
    
    printf("Digite as notas: ");
    scanf("%d %d %d %d", &nota1, &nota2, &nota3, &nota4);
    printf("\n%d %d %d %d\n", nota1, nota2, nota3, nota4);
    
    
    for(int i = 0; i < nota1; i++){
        printf("*");
    }
    printf("\n");
    for(int i = 0; i < nota2; i++){
        printf("*");
    }
    printf("\n");
    for(int i = 0; i < nota3; i++){
        printf("*");
    }
    printf("\n");
    for(int i = 0; i < nota4; i++){
        printf("*");
    }
    
    
    return 0;
}