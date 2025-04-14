// justifier
#include <stdio.h>
#include <string.h>

typedef struct {
    char palavra[51];
    int tamanho;       
} Palavra;

int main() {
    int numero_palavras;
    int espaco;
    
    while (1) {
        scanf("%d", &numero_palavras);
        
        if (numero_palavras == 0) {
            return 0; 
        }

        Palavra palavras[numero_palavras];
        int tamanho_max = 0; 

        for (int i = 0; i < numero_palavras; i++) {
            scanf("%s", palavras[i].palavra);
            palavras[i].tamanho = strlen(palavras[i].palavra);
            if (palavras[i].tamanho > tamanho_max) {
                tamanho_max = palavras[i].tamanho;
            }
        }
        for (int i = 0; i < numero_palavras; i++) {
            espaco = tamanho_max - palavras[i].tamanho; 
            
            for (int j = 0; j < espaco; j++) {
                printf(" ");
            }
            printf("%s\n", palavras[i].palavra);
        }
        
        printf("\n");
    }
    
    return 0;
}
