// jingle
#include <stdio.h>
#include <string.h>

double tempo_nota(char nota) {
    switch (nota) {
        case 'W': {
            return 1.0;
        }
        case 'H': {
            return 1.0/2;
        }
        case 'Q': {
            return 1.0/4;
        }
        case 'E': {
            return 1.0/8;
        }
        case 'S': {
            return 1.0/16;
        }
        case 'T': {
            return 1.0/32;
        }
        case 'X': {
            return 1.0/64;
        }
        default: {
            return 0.0;
        }
    }
}

int main() {
    char linha[210];

    while (scanf(" %[^\n]", linha) == 1) {
        if (linha[0] == '*') {
            break;
        }

        int corretas = 0;
        double soma = 0.0;

        for (int i = 1; linha[i] != '\0'; i++) {
            if (linha[i] == '/') {
                if (soma == 1.0) {
                    corretas++;
                }
                soma = 0.0;
            } else {
                soma += tempo_nota(linha[i]);
            }
        }

        printf("%d\n", corretas);
    }

    return 0;
}