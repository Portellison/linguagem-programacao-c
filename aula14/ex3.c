#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

void inverter_string(char *str);


int main(void){

    printf("Digite a palavra que deseja inverter: ");
    char palavra[100];
    scanf("%99s", palavra);
    inverter_string(palavra);
    printf("\n%s\n", palavra);



return 0;
}

void inverter_string(char *str){
    char *inicio = str;
    char *fim = str;

    while(*fim != '\0'){
        fim++;
    }
    fim--;

    while (inicio < fim ){
        char temp = *inicio;
        *inicio = *fim;
        *fim = temp;

        inicio++;
        fim--;
    }
}
