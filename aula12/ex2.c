#include <stdio.h>

int main(void){
    int num;

    printf("Digite um numero:\n");
    scanf("%d", &num);

    for (int i = 3; i < num; i++){
        if (i % 3 == 0 || i % 5 == 0){
            printf("%d ", i);
        } 
    }
    return 0;
}
