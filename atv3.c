// Tagged struct (struct + unions + enum)
#include <stdio.h>

typedef struct Circle {
    double r;
} Circle;

typedef struct Rectangle {
    double width;
    double height;
} Rectangle;

typedef union Figures {
    Circle circle;
    Rectangle rectangle;
} Figures;

typedef enum {
    CIRCULO,
    RETANGULO
} Label_figures;

typedef struct {
    Label_figures tipo; // enum
    Figures figura; // union:: ou um, ou outro
} FiguraGeometrica;

double area(FiguraGeometrica figurinha){
    if (figurinha.tipo == CIRCULO){
        double r = figurinha.figura.circle.r;
        return (3.14 * r * r);
        
    } else if (figurinha.tipo == RETANGULO){
        double w = figurinha.figura.rectangle.width;
        double h = figurinha.figura.rectangle.height;
        return (w * h);
    } else {
        return 0.0;
    }
}


int main(){
    FiguraGeometrica f;
    f.tipo = CIRCULO;
    f.figura.circle.r = 1.2;

    double result_circle = area(f);
    printf("Area do circulo: %.2lf m2\n\n", result_circle);

    FiguraGeometrica g;
    g.tipo = RETANGULO;
    g.figura.rectangle.height = 5.3;
    g.figura.rectangle.width = 7.4;

    double result_rectangle = area(g);
    printf("Area do retangulo: %.2lf m2\n", result_rectangle);
    
    return 0;
}