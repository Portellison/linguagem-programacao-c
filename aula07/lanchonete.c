#include <stdio.h>

int main(void){


    char item = ' ';
    int s = 0, b = 0, h = 0, c = 0, total = 0;
    float valor = 0;


    while(item != 'F'){

        puts("Insira o item vendido: ");
        item = getchar();
        getchar();

            switch(item){

                case 'S':
                s++;
                valor += 9;
                break;

                case 'B':
                b++;
                valor += 10;
                break;

                case 'H':
                h++;
                valor += 15;
                break;

                case 'C':
                c++;
                valor += 30;
                break;

                default:
                printf("Item não cadastrado!\n\n");
                break;
            }
        
    };

    total = s + b + h + c;

    printf("Suco:            %d vendidos\n", s);
    printf("Batata:          %d vendidos\n", b);
    printf("Hamburguer:      %d vendidos\n", h);
    printf("Combos:          %d vendidos\n", c);
    printf("----------------------------\n");
    printf("Total:           %d itens\n", total);
    printf("Valor total: R$ %.2f\n", valor);

    return 0;
}