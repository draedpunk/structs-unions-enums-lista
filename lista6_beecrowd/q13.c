// building
#include <stdio.h>
#include <math.h>

typedef struct
{
    int largura;
    int comprimento;
    int porcentagem_terreno;
} Casa;


int calcular_area_terreno(Casa casinha){
    int area, raiz_terreno;
    double C, terreno;

    area = casinha.largura * casinha.comprimento;
    C= (double) casinha.porcentagem_terreno/ 100.0;
    terreno = area/C;
    raiz_terreno = (int) sqrt(terreno);

    return raiz_terreno;
}

int main() {
    Casa caza;

    while (1){
        scanf("%d %d %d", &caza.largura,&caza.comprimento, &caza.porcentagem_terreno);

        if ((caza.largura ==0|| caza.comprimento ==0|| caza.porcentagem_terreno == 0)){
            return 0;
        }

        int resultado = calcular_area_terreno(caza);

        printf("%d\n", resultado);

    }
 
    return 0;
}