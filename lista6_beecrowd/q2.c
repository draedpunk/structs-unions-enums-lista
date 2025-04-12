// simple calculate
#include <stdio.h>

typedef struct Hotdog
{
    int id;
    int qtd;
    double preco;
} Cachorro_quente;

typedef struct Churros
{
    int id;
    int qtd;
    double preco;
} Churros_chaves;

double calcular_preco_total(int quantidade, double p){

    double total = quantidade * p;
    return total;
}

int main(){
    Cachorro_quente cq;
    Churros_chaves cc;
    double total = 0.0;

    scanf("%d %d %lf", &cq.id, &cq.qtd, &cq.preco);
    total += calcular_preco_total(cq.qtd, cq.preco);

    scanf("%d %d %lf", &cc.id, &cc.qtd, &cc.preco);
    total += calcular_preco_total(cc.qtd, cc.preco);

    printf("VALOR A PAGAR: R$ %.2lf\n", total);

    return 0;
}