#include <stdio.h>

int main(void){

    FILE *quadrado = fopen("quadrado.svg", "w");

    fprintf(quadrado, "<svg version=\"1.1\"\nwidth=\"300\" height=\"200\"\nxmlns=\"http://www.w3.org/2000/svg\">\n<rect x=\"20\" y=\"30\" width=\"100\" height=\"100\" fill=\"red\" />\n</svg>");

    fclose(quadrado);
    
    return 0;
}

