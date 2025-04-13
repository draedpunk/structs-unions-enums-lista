//international chat
#include <stdio.h>
#include <string.h>
// 1581 - Uso obrigatório de struct para 
// armazenar o nome e o idioma de cada participante.

typedef struct
{
    char nome[51]; // essa variavel nao é usada no beecrowd/codigo, entao nao coloquei ela em funcionamento
    char idioma1[21];
    char idioma2[21];
} Pessoa;


int main() {
    int casos, qtd_pessoas;
    Pessoa participantes;
    int idiomas_diferentes;

    scanf("%d", &casos);
    /**
    * se tiver 2 pessoas com o msm idioma == idioma das duas pessoas
    * se tiver 2 ou mais pessoas com idiomas diferentes == idioma falado sera o ingles
    */
    for (int i = 0; i < casos; i++) {
        scanf("%d", &qtd_pessoas);

        scanf("%s", participantes.idioma1);
        idiomas_diferentes = 0; 

        for (int j = 1; j < qtd_pessoas; j++) {
            scanf("%s", participantes.idioma2);

            if (strcmp(participantes.idioma1, participantes.idioma2) != 0) {
                idiomas_diferentes = 1;
            }
        }

        if (idiomas_diferentes) {
            printf("english\n");
        } else {
            printf("%s\n", participantes.idioma1);
        }
    }

    return 0;
}