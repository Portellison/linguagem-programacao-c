#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>



void abertura(FILE * figuras);
void fechamento(FILE * figuras);
void retangulo (FILE * figuras);
void linha (FILE * figuras);
void circulo (FILE * figuras);
void menu(void);
void texto(FILE * figuras);




int main(void){
    char opcao;
    FILE *figuras = fopen("figuras.svg", "w");
    abertura(figuras);
    do{
        menu();
        scanf("%c", &opcao);
        opcao = toupper(opcao);

        switch(opcao){
            case 'R':
                retangulo(figuras);
                break;
            case 'C':
                circulo(figuras);
                break;
            case 'T': 
                texto(figuras);
                break;
            case 'L':
                linha(figuras);
                break;
            case 'F':
                break;
        }        
    }while(opcao != 'F');
    fechamento(figuras);
    fclose(figuras);
    printf("Encerrando programa...\n");
    return 0;
}

void menu(void) {
    system("clear"); 
    printf("--------------------------------\n");
    printf("|     Editor de arquivos SVG     |\n");
    printf("|--------------------------------|\n");
    printf("| R - Retangulo                  |\n");
    printf("| C - Círculo                    |\n");
    printf("| L - Linha                      |\n");
    printf("| T - Texto                      |\n"); 
    printf("| F - Finalizar                  |\n");
    printf("--------------------------------\n");
}
void abertura(FILE * arquivo) {
    fprintf(arquivo, "<svg version=\"1.1\" \n");
    fprintf(arquivo, "width=\"300\" height=\"200\" \n");
    fprintf(arquivo, "xmlns=\"http://www.w3.org/2000/svg\">\n");
}
void fechamento(FILE * arquivo) {
    fprintf(arquivo, "</svg>");
}
void retangulo(FILE * figuras){
    int altura, largura, x, y;

    printf("Digite a coordenada x do retangulo: \n");
    scanf("%d", &x);
    printf("Digite a coordenada y do retangulo: \n");
    scanf("%d", &y);
    printf("Digite a altura do retangulo: \n");
    scanf("%d", &altura);
    printf("Digite a largura do retangulo: \n");
    scanf("%d", &largura);
    fprintf(figuras, "<rect x=\"%d\" y=\"%d\" width=\"%d\" height=\"%d\" fill=\"black\" />\n", x, y, largura, altura);

    printf("Retangulo desenhado com sucesso!\n");
}
void circulo(FILE * figuras){
    int raio, x, y;
    printf("Digite a coordenada x do circulo: \n");
    scanf("%d", &x);
    printf("Digite a coordenada y do circulo: \n");
    scanf("%d", &y);
    printf("Digite o raio do circulo: \n");
    scanf("%d", &raio);
    fprintf(figuras, "<circle cx=\"%d\" cy=\"%d\" r=\"%d\" fill=\"black\" />\n", x, y, raio);

    printf("Circulo desenhado com sucesso!\n");
}
void linha(FILE * figuras){
    int x1, y1, x2, y2;
    printf("Digite a coordenada x do ponto 1: \n");
    scanf("%d", &x1);
    printf("Digite a coordenada y do ponto 1: \n");
    scanf("%d", &y1);
    printf("Digite a coordenada x do ponto 2: \n");
    scanf("%d", &x2);
    printf("Digite a coordenada y do ponto 2: \n");
    scanf("%d", &y2);
    fprintf(figuras, "<line x1=\"%d\" y1=\"%d\" x2=\"%d\" y2=\"%d\" stroke=\"black\" />\n", x1, y1, x2, y2);

    printf("Linha desenhada com sucesso!\n");
}
void texto(FILE *figuras) {
    int x, y;
    char fill_color[50];
    int font_size;
    char content[256];

    printf("\n--- Adicionar Texto ---\n");
    printf("Digite a coordenada X do texto: ");
    if (scanf("%d", &x) != 1) {
        printf("Entrada inválida para X. Por favor, digite um número.\n");
        while (getchar() != '\n');
        return;
    }
    while (getchar() != '\n');

    printf("Digite a coordenada Y do texto: ");
    if (scanf("%d", &y) != 1) {
        printf("Entrada inválida para Y. Por favor, digite um número.\n");
        while (getchar() != '\n');
        return;
    }
    while (getchar() != '\n');

    printf("Digite a cor do texto (ex: black, red, blue, #FF0000): ");
    if (scanf("%49s", fill_color) != 1) { 
        printf("Entrada inválida para a cor. Tente novamente.\n");
        while (getchar() != '\n'); 
        return; 
    }
    while (getchar() != '\n');

    printf("Digite o tamanho da fonte (font-size, ex: 20): ");
    if (scanf("%d", &font_size) != 1) {
        printf("Entrada inválida para o tamanho da fonte. Por favor, digite um número.\n");
        while (getchar() != '\n');
        return; 
    }
    while (getchar() != '\n'); 

    printf("Digite o conteúdo do texto (máximo 255 caracteres): ");
    if (fgets(content, sizeof(content), stdin) == NULL) {
        printf("Erro ao ler o conteúdo do texto. Tente novamente.\n");
        return;
    }
    content[strcspn(content, "\n")] = 0;


    fprintf(figuras, "  <text x=\"%d\" y=\"%d\" fill=\"%s\" font-size=\"%d\">%s</text>\n",
            x, y, fill_color, font_size, content);
    printf("Texto adicionado ao SVG com sucesso!\n");
}
