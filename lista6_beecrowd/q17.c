//Dudu Service Maker
#include <stdio.h>
enum Estado { NAO_VISITADO = 0, VISITANDO = 1, VISITADO = 2 };

typedef struct {
    int adj[100][100];
    int n;             
} Grafo;

Grafo grafo;
int estado[100];
int ciclo;

void dfs(int u) {
    estado[u] = VISITANDO;

    for (int v = 1; v <= grafo.n; v++) {
        if (grafo.adj[u][v]) {
            if (estado[v] == VISITANDO) {
                ciclo = 1;
                return;
            } else if (estado[v] == NAO_VISITADO) {
                dfs(v);
                if (ciclo) return;
            }
        }
    }

    estado[u] = VISITADO;
}

int main() {
    int testes;
    scanf("%d", &testes);

    while (testes--) {
        int dependencias;
        scanf("%d %d", &grafo.n, &dependencias);
        for (int i = 0; i < 100; i++) {
            estado[i] = NAO_VISITADO;
            for (int j = 0; j < 100; j++) {
                grafo.adj[i][j] = 0;
            }
        }

        for (int i = 0; i < dependencias; i++) {
            int a, b;
            scanf("%d %d", &a, &b);
            grafo.adj[a][b] = 1;
        }

        ciclo = 0;

        for (int i = 1; i <= grafo.n; i++) {
            if (estado[i] == NAO_VISITADO) {
                dfs(i);
                if (ciclo) break;
            }
        }

        if (ciclo) {
            printf("SIM\n");
        } else {
            printf("NAO\n");
        }
    }

    return 0;
}
