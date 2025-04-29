#include <stdio.h>
#define PI 3.14159

int main(void){

    float raio;
    printf("Digite o valor do raio:\n");
    scanf("%f", &raio);

    float area = (raio * raio) * PI;
    printf("%.2f metros quadrados\n", area);

    return 0;
}
