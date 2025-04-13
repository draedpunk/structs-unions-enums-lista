// counting sheep
#include <stdio.h>

int contar_ovelhas_unicas(int vetor[], int qtd_fornecida_ovelhas){
    int contador_ovelhas = 0;

    for (int d = 0; d < qtd_fornecida_ovelhas; d++){
        int p;
        for (p = 0; p < d; p++){
            if (vetor[d] == vetor[p]){
                break;
            }
        }
        if(p == d){
            contador_ovelhas++;
        }
    }

}
 
int main() {
    int casos, qtd_ovelhas;
    scanf("%d\n", &casos);


    for (int i = 0; i < casos;i++){
        scanf("%d", &qtd_ovelhas);

        int sequencia_ovelhas[qtd_ovelhas];

        for (int j = 0; j < qtd_ovelhas; j++){
            scanf("%d", &sequencia_ovelhas[j]);
        }

        int resultado;
        resultado = contar_ovelhas_unicas(sequencia_ovelhas, qtd_ovelhas);

        printf("%d\n", resultado);
    }


    return 0;
}