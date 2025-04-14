// triangle
#include <stdio.h>

typedef struct {
    int lado1;
    int lado2;
    int lado3;
} Triangulo;

int verificar_triangulo(Triangulo t) {
    return (t.lado1 + t.lado2 > t.lado3 &&
            t.lado2 + t.lado3 > t.lado1 &&
            t.lado1 + t.lado3 > t.lado2);
}

int main() {
    int A, B, C, D;
    scanf("%d %d %d %d", &A, &B, &C, &D);

    Triangulo t1 = {A, B, C};
    Triangulo t2 = {A, B, D};
    Triangulo t3 = {A, C, D};
    Triangulo t4 = {B, C, D};

    if (verificar_triangulo(t1) || verificar_triangulo(t2) 
            || verificar_triangulo(t3) || verificar_triangulo(t4)) {
        printf("S\n");
    } else {
        printf("N\n");
    }

    return 0;
}
