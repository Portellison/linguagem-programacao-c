#include <stdio.h>

int main(void){

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("A: %d  B: %d  %d||%d = %d\n", i, j, i, j, i || j);
        }
    }
    return 0;
}