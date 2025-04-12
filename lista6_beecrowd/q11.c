//one-two-three
#include <stdio.h>
#include <string.h>
 
int main() {
    int casos;
    char palavra_fornecida[11];
    
    // three = 5
    // one e two = 2
    int um = 0;
    int dois = 0;
    for (int i = 0; i < casos; i++){
        scanf("%s", palavra_fornecida);
        
        if(sizeof(palavra_fornecida) == 5){
            printf("3\n");
        } else (sizeof(palavra_fornecida == 2)){
            for (int i = 0; i < sizeof(palavra_fornecida); i++){
                if(strcmp(palavra_fornecida[i], "o") == 1){
                    um++;
                }
                if (strcmp(palavra_fornecida[i], "n") == 1){
                    um++;
                }
                if (strcmp(palavra_fornecida[i], "e") == 1){
                    um++;
                }
            }
            if (um >= 2){
                printf("1\n");
            } else {
                printf("2\n");
            }
        }
    }
 
    return 0;
}