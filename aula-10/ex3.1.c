#include <stdio.h>
#include "util.h"

int main(void){
    double raio, a, c, d;

    printf("Digite o valor do raio da circunferencia: \n");
    scanf("%lf", &raio);

    printf("O diametro e: %.2lf\n", d = diametro(raio));
    printf("O perimetro e: %.2lf\n", c = circunferencia(raio));
    printf("A area e: %.2lf\n", a = area(raio));

    return 0;
}