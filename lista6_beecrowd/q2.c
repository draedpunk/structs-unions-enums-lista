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
    int codigo_fornecido;
    Cachorro_quente cq;
    Churros_chaves cc;
    int quantidade_fornecida;
    double preco_fornecido;

    for (int i = 0; i < 2; i++){
        scanf("%d %d %lf\n", &codigo_fornecido, &quantidade_fornecida, &preco_fornecido);
    }

    double r,soma = 0.0;
    int qtdzinha_cachorro = cq.qtd;
    double precinho_cachorro = cq.preco;

    int qtdzinha_churros = cc.qtd;
    double precinho_churros = cc.preco;

    switch (codigo_fornecido)
    {
    case 1: // cachorro
        r = calcular_preco_total(qtdzinha_cachorro, precinho_cachorro);
        soma += r; 
        printf("VALOR A PAGAR: R$ %.2lf", r);
        break;
    case 12: // cachorro
        r = calcular_preco_total(qtdzinha_cachorro, precinho_cachorro);
        printf("VALOR A PAGAR: R$ %.2lf", r);
        break;

    case 13: // cachorro
        r = calcular_preco_total(qtdzinha_cachorro, precinho_cachorro);
        printf("VALOR A PAGAR: R$ %.2lf", r);
        break;

    case 2: // churros
        r = calcular_preco_total(qtdzinha_churros, precinho_churros);
        printf("VALOR A PAGAR: R$ %.2lf", r);
        break;

    case 16: // churros
        r = calcular_preco_total(qtdzinha_churros, precinho_churros);
        printf("VALOR A PAGAR: R$ %.2lf", r);
        break;

    case 161: // churros
        r = calcular_preco_total(qtdzinha_churros, precinho_churros);
        printf("VALOR A PAGAR: R$ %.2lf", r);
        break;

    default:
        break;
    }
    return 0;
}