// one-two-three
//Uso obrigatório de enum para representar os números e 
// uma struct para armazenar a palavra e sua correspondência numérica.
#include <stdio.h>
#include <string.h>

typedef enum {
    UM =1,
    DOIS,
    TRES
} Numeros;

typedef struct
{
    Numeros n;
    char palavra_errada[10];
} Palavra;

Numeros verificar_palavra(Palavra palavrinha){
    int um = 0;
    if (strlen(palavrinha.palavra_errada) == 5) {
        // printf("3\n");
        return TRES;

    } else if (strlen(palavrinha.palavra_errada) == 3) {
        if (palavrinha.palavra_errada[0] == 'o'){
            um++;
        } 
        if (palavrinha.palavra_errada[1] == 'n'){
            um++;
        } 
        if (palavrinha.palavra_errada[2] == 'e'){
            um++;
        }

        if (um >= 2) {
            // printf("1\n");
            return UM;
        } else {
            // printf("2\n");
            return DOIS;
        }
    }   
}

int main() {
    int casos;
    Palavra palavra_fornecida;
    
    scanf("%d", &casos);
    Numeros r;
    for (int i = 0; i < casos; i++) {
        scanf("%s", palavra_fornecida.palavra_errada);
        r = verificar_palavra(palavra_fornecida);
        printf("%d\n", r);
    }

    return 0;
}