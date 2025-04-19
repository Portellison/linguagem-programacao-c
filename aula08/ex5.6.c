#include <stdio.h>

int main(void){

    for(int i = 0; i < 2; i++){
        printf("A: %d ! %d=%d\n", i, i, !i);
    }
    return 0;
}