#include <stdio.h>
#include <string.h>

const char* translate_color(const char* color_pt);

int main(void){
    FILE *novo = fopen("novo.svg", "w");
    int x, y, altura, largura;
    char color_pt[20];

    printf("DIgite a posição x e y do quadrado: ");
    scanf("%d %d", &x, &y);

    printf("\nDigite a altura e largura do quadrado: ");
    scanf("%d %d", &altura, &largura);

    printf("\nDigite a cor que deseja seu quadrado: ");
    scanf("%19s", color_pt);

    const char* color_en = translate_color(color_pt);


    fprintf(novo, "<svg version=\"1.1\"\n");
    fprintf(novo, "width=\"300\" height=\"200\"\n");
    fprintf(novo, "xmlns=\"http://www.w3.org/2000/svg\">\n");
    fprintf(novo, "<rect x=\"%d\" y=\"%d\" width=\"%d\" height=\"%d\" fill=\"%s\" />", x, y, largura, altura, color_en);
    fprintf(novo, "</svg>\n");

    fclose(novo);


    return 0;
}

const char* translate_color(const char* color_pt) {
    if (strcmp(color_pt, "vermelho") == 0) return "red";
    if (strcmp(color_pt, "azul") == 0) return "blue";
    if (strcmp(color_pt, "amarelo") == 0) return "yellow";
    if (strcmp(color_pt, "verde") == 0) return "green";
    if (strcmp(color_pt, "laranja") == 0) return "orange";
    if (strcmp(color_pt, "roxo") == 0) return "purple";
    if (strcmp(color_pt, "preto") == 0) return "black";
    if (strcmp(color_pt, "branco") == 0) return "white";
    if (strcmp(color_pt, "cinza") == 0) return "gray";
    if (strcmp(color_pt, "rosa") == 0) return "pink";
    if (strcmp(color_pt, "marrom") == 0) return "brown";
    if (strcmp(color_pt, "ciano") == 0) return "cyan";
    if (strcmp(color_pt, "magenta") == 0) return "magenta";
    if (strcmp(color_pt, "ouro") == 0) return "gold";
    if (strcmp(color_pt, "prata") == 0) return "silver";

    return color_pt;
}
