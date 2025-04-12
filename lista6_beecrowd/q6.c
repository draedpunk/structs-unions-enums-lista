#include <stdio.h>

typedef enum {
    BRASILIA = 61,
    SALVADOR = 71,
    SAO_PAULO = 11,
    RIO_DE_JANEIRO = 21,
    JUIZ_DE_FORA = 32,
    CAMPINAS = 19,
    VITORIA = 27,
    BELO_HORIZONTE = 31
} DDD_Estados;

void combinar_ddd_estado(DDD_Estados de){
    
    switch(de){
        case 11:
            printf("Sao Paulo\n");
            break;
        case 19:
            printf("Campinas\n");
            break;
        case 21:
            printf("Rio de Janeiro\n");
            break;
        case 27:
            printf("Vitoria\n");
            break;
        case 31:
            printf("Belo Horizonte\n");
            break;
        case 32:
            printf("Juiz de Fora\n");
            break;
        case 61:
            printf("Brasilia\n");
            break;
        case 71:
            printf("Salvador\n");
            break;
        default:
            printf("DDD nao cadastrado\n");
            break;
    }
    
}
 
int main() {
    DDD_Estados x;
    int ddd_fornecido;
    scanf("%d", &ddd_fornecido);
    combinar_ddd_estado(ddd_fornecido);
    return 0;
}