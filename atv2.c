#include <stdio.h>

int main()
{
    struct Data {
        int dd;
        int mm;
        int aaaa;
    } typedef Data;
    
    struct Voo{
        char origem[50];
        char destino[50];
        Data data;
        char h_partida[10];
        char h_chegada[10];
    } typedef Voo;
    
    Data date = {1, 10, 2076};
    
    Voo para_russia = {"Recife", "Kaliningrad", date,
                        "05:30 AM", "07:53 PM"};

    printf("Origem: %s\n", para_russia.origem);
    printf("Destino: %s\n", para_russia.destino);
    printf("Data: %d/%d/%d\n", date.dd, date.mm, date.aaaa);
    printf("Horario de partida: %s\n", para_russia.h_partida);
    printf("Horario de chegada: %s", para_russia.h_chegada);

    return 0;
}
