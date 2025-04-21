#include <stdio.h>

int retornaValor(void);
int soma (int x, int y);
void imprimeResultado(int x);




int main(void){

    int N1, N2, resultado;

    N1 = retornaValor();
    printf("O valor recebido foi: %d\n", N1);

    N2 = retornaValor();
    printf("O valor recebido foi: %d\n", N2);

    resultado = soma(N1, N2);

    imprimeResultado(resultado);

    return 0;
}

int retornaValor(void){
    int x;
    printf("Digite um valor: \n");
    scanf("%d", &x);
    return x;
}
int soma(int x, int y){
    return x + y;
}
void imprimeResultado(int x){
    printf("Resultado = %d\n", x);
}