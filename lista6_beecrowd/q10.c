// Feynman
#include <stdio.h>
 
int achar_quadrados(int N){
    int quadrados = 0;
    if (N == 1){
        quadrados = 1;
    } else {
        for (int i = 1; i <= N; i++){
            quadrados += i * i;
        }
    }
    return quadrados;
}

int main() {
    while (1) {
        int n;
        scanf("%d", &n);
        
        if (n == 0) {
            return 0;
        } else {
            int resul = achar_quadrados(n);
            printf("%d\n", resul);
        }
    }
    return 0;
}