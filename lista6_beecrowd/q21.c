// abc
#include <stdio.h>
#include <string.h>

const int modulo = 1000000007;

long long converter_para_decimal(const char palavra[]) {
    long long resultado = 0;
    int tamanho = strlen(palavra);
    int valor;

    for (int i = 0; i < tamanho; i++) {
        valor = palavra[i] -'A';
        resultado = (resultado *26 +valor) % modulo;
    }

    return resultado;
}

int main() {
    char palavra[1001];

    while (scanf("%s", palavra) != EOF) {
        printf("%lld\n", converter_para_decimal(palavra));
    }

    return 0;
}
