// Area of a Circle
#include <stdio.h>

typedef struct Circulo
{
    double raio;
} Circulozinho;

double area(Circulozinho c){
    double a;
    a = 3.14159 * (c.raio * c.raio);

    return a;
}

int main(){
    Circulozinho circulo_x;
    double R;
    scanf("%lf", &R);

    circulo_x.raio = R;
    double resultado = area(circulo_x);
    printf("A=%.4lf\n", resultado);
    return 0;
}