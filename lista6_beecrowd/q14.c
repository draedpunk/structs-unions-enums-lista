// height
#include <stdio.h>

typedef struct {
    int contagem[231];
} Populacao;

int main() {
    int casos;
    scanf("%d", &casos);

    for (int t = 0; t < casos; t++) {
        int pessoas_cidade;
        scanf("%d", &pessoas_cidade);

        Populacao cidade = {0};

        for (int i = 0; i < pessoas_cidade; i++) {
            int h;
            scanf("%d", &h);
            cidade.contagem[h]++;
        }
        int primeiro = 1;
        for (int h = 20; h <= 230; h++) {
            for (int c = 0; c < cidade.contagem[h]; c++) {
                if (primeiro) {
                    printf("%d", h);
                    primeiro = 0;
                } else {
                    printf(" %d", h);
                }
            }
        }
        printf("\n");
    }

    return 0;
}
