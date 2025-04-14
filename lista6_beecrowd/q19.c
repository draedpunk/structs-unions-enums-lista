// square array IV
#include <stdio.h>

typedef enum {
    EXTERNO = 0,
    INTERNO = 1,
    PRINCIPAL = 2,
    SECUNDARIA = 3,
    CENTRAL = 4
} Numeros_matriz;


int main() {
    int N;

    while(scanf("%d", &N) != EOF){

        int matriz[N][N];
    
        int inicio, fim;
        inicio = N/3;
        fim = N - inicio;
    
        for (int i = 0; i < N; i++){
            for (int j = 0;j < N; j++){
                // 0 em tudo
                matriz[i][j] = EXTERNO;
            }
        }
        for (int j = 0; j < N;j++){
            // diagonal secundaria = 3
            // DS = (i + j == N - 1)
            matriz[j][N - 1 - j] = SECUNDARIA;
        }
        // centro
        matriz[N/2][N/2] = CENTRAL;

        for (int i = inicio; i < fim; i++){
            for (int j = inicio;j < fim; j++){
                if (matriz[i][j] == EXTERNO){
                    matriz[i][j] = INTERNO;
                }
                
            }
        }
    
        for (int i = 0; i < N; i++){
            for(int j = 0; j< N; j++){
                printf("%d", matriz[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}