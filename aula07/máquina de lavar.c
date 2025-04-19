#include <stdio.h>

int main(void){

char modo;

printf("Escolha o modo de lavagem:\nA: Lava, enxague e seca\nB: Enxague e seca\nC: Seca\nP para encerrar a lavagem.\nModo: ");
modo = getchar();
getchar();
while(modo != 'P'){
    
    switch(modo){
        case 'A':
        puts("Lavando");
        

        case 'B':
        puts("Enxaguando");

        case 'C':
        puts("Secando");
        break;
    }
    printf("Escolha o modo de lavagem:\nA: Lava, enxague e seca\nB: Enxague e seca\nC: Seca\nP para encerrar a lavagem.\nModo: ");
    modo = getchar();
    getchar();
}

printf("Lavagem concluída");
    return 0;
}