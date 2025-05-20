#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


double calcular_tempo_queda(float altura);
double calcular_distancia(float velocidade, float altura);


int main(void){
    float altura, velocidade, tempo_queda, distancia_queda;

    printf("Digite a altura do avião em metros:\n");
    scanf("%f", &altura);

    printf("Digite a velocidade do aviao em metros por segundo:\n");
    scanf("%f", &velocidade);

    tempo_queda = calcular_tempo_queda(altura);
    distancia_queda = calcular_distancia(velocidade, altura);
    system("clear");
    printf("A carga atingirá o alvo %.2f segundos apos a liberação do avião\n\n", tempo_queda);
    printf("O alvo precisa estar a %.2f metros\n\n", distancia_queda);




return 0;
};

double calcular_tempo_queda(float altura){
    
    float g = 9.81, tempo;
    tempo = sqrt((2 * altura) / g);

 return tempo;
}

double calcular_distancia(float velocidade, float altura){
    
    float g = 9.81, distancia, tempo;
    tempo = sqrt((2 * altura) / g);

    distancia = velocidade * tempo;

 return distancia;

}
