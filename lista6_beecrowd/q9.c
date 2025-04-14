// fake tickets
#include <stdio.h>

typedef struct {
    int num_tickets;
    int qtd_pessoas;
    int tickets[10001];
} Festa;

int main() {
    Festa dados;

    while (1) {
        scanf("%d %d", &dados.num_tickets, &dados.qtd_pessoas);
        
        if (dados.num_tickets == 0 && dados.qtd_pessoas == 0) {
            break;
        }

        for (int i = 0; i <= dados.num_tickets; i++) {
            dados.tickets[i] = 0;
        }

        for (int i = 0; i < dados.qtd_pessoas; i++) {
            int ticket;
            scanf("%d", &ticket);
            dados.tickets[ticket]++;
        }
        int copias = 0;
        for (int i = 1; i <= dados.num_tickets; i++) {
            if (dados.tickets[i] > 1) {
                copias++;
            }
        }

        printf("%d\n", copias);
    }

    return 0;
}


