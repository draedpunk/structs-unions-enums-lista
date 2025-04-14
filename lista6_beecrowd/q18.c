// colision -- essa aqui deu time out no beecrowd
#include <stdio.h>
// Uso obrigatório de struct para representar as coordenadas do ponto e do retângulo
typedef struct {
    int x;
    int y;
} Wall_e;

typedef struct {
    int A;
    int B;
    int C;
    int D;
} Retangulo;

int verificar_posicao(Retangulo area, Wall_e robo) {

    int limite_min_X;
    int limite_max_X;
    int limite_min_Y;
    int limite_max_Y;

    // pra X --------------
    if (area.A < area.C) {
        limite_min_X = area.A;
        limite_max_X = area.C;
    } else {
        limite_min_X = area.C;
        limite_max_X = area.A;
    }
    // pra Y ------------------
    if (area.B < area.D) {
        limite_min_Y = area.B;
        limite_max_Y = area.D;
    } else {
        limite_min_Y = area.D;
        limite_max_Y = area.B;
    }
    
    int dentro =0; // fora pra inicio
    if (robo.x >= limite_min_X && robo.x <= limite_max_X && 
        robo.y >= limite_min_Y && robo.y <= limite_max_Y) {
            dentro = 1; // ta dentro

    }
    return dentro; //ta fora
}

int main() {
    int casos;
    scanf("%d", &casos);

    Wall_e robo;
    Retangulo area;

    for (int i = 0; i < casos; i++) {
        scanf("%d %d %d %d %d %d %d %d %d %d", 
              &area.A, &area.B,&area.C, &area.D,&robo.x, &robo.y);

        if (verificar_posicao(area, robo)) {
            printf("1\n"); 
        } else {
            printf("0\n");
        }
    }


    return 0;
}
