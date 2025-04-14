#include <stdio.h>
#include <math.h> 

typedef struct {
    int numerador;
    int denominador;
} Fracao;

int gcd(int a, int b) {
    int x;
    while (b != 0) {
        x = b;
        b = a % b;
        a = x;
    }
    return a;
}

Fracao simplificacao(Fracao f) {
    int divisor_comum = gcd(abs(f.numerador), abs(f.denominador));
    
    f.numerador /= divisor_comum;
    f.denominador /= divisor_comum;
    if (f.denominador < 0) {
        f.numerador = -f.numerador;
        f.denominador = -f.denominador;
    }

    return f;
}

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        Fracao f1, f2, resultado;
        char operacao_simbolo;

        scanf("%d / %d %c %d / %d", &f1.numerador, &f1.denominador, &operacao_simbolo, 
            &f2.numerador, &f2.denominador);

        if (operacao_simbolo == '+') {
            resultado.numerador = f1.numerador * f2.denominador + f2.numerador * f1.denominador;
            resultado.denominador = f1.denominador * f2.denominador;
        } else if (operacao_simbolo == '-') {
            resultado.numerador = f1.numerador * f2.denominador - f2.numerador * f1.denominador;
            resultado.denominador = f1.denominador * f2.denominador;
        } else if (operacao_simbolo == '*') {
            resultado.numerador = f1.numerador * f2.numerador;
            resultado.denominador = f1.denominador * f2.denominador;
        } else if (operacao_simbolo == '/') {
            resultado.numerador = f1.numerador * f2.denominador;
            resultado.denominador = f2.numerador * f1.denominador;
        }

        resultado = simplificacao(resultado);
        
        printf("%d/%d = %d/%d\n", f1.numerador, f1.denominador, resultado.numerador, resultado.denominador);
    }

    return 0;
}
