// Snack
#include <stdio.h>

typedef enum {
    CACHORRO_QUENTE = 1,
    X_SALADA,
    X_BACON,
    TORRADA,
    REFRI
} Lanches;

void calcular_preco(Lanches x, int qtd){
    double total;
    switch(x){
        case CACHORRO_QUENTE:
            total = (double) qtd * 4.00;
            break;
        case X_SALADA:
            total = (double) qtd * 4.50;
            break;
        case X_BACON:
            total = (double) qtd*5.00;
            break;
        case TORRADA:
            total = (double) qtd*2.00;
            break;
        case REFRI:
            total = (double) qtd* 1.50;
            break;
            
    } printf("Total: R$ %.2lf\n", total);
}
 
int main() {
    Lanches lanchinho_forncido;
    int cod, qtd;
    scanf("%d %d", &cod, &qtd);
    
    lanchinho_forncido =cod;
    calcular_preco(lanchinho_forncido, qtd);
    
    return 0;
}