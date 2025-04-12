#include <stdio.h>
#include <string.h>
//1049 - Uso obrigatório de um enum para representar as categorias de animais 
//e uma struct para armazenar as características.

typedef enum {
    VERTEBRADO,
    INVERTEBRADO
} Categoria;

typedef enum {
    AVE,
    MAMIFERO,
    INSETO,
    ANELIDEO
} Classe_animal;

typedef enum {
    CARNIVORO,
    ONIVORO,
    HERBIVORO,
    HEMATOFAGO
} Alimentacao;

typedef struct {
    Categoria coluna_vert;
    Classe_animal tipo;
    Alimentacao modo_alimentacao;
    
} Caracteristicas_animal;

void descobrir_animal(Categoria cv, Classe_animal t, Alimentacao a){
    char animal_descoberto[50] = "";

    if (cv == VERTEBRADO){
        if(t == AVE){
            if (a == CARNIVORO) {
                strcpy(animal_descoberto, "aguia");
            } else if (a == ONIVORO){
                strcpy(animal_descoberto, "pomba");
            }
        } else if(t == MAMIFERO){
            if (a == ONIVORO){
                strcpy(animal_descoberto, "homem");
            } else if (a == HERBIVORO){
                strcpy(animal_descoberto, "vaca");
            }
        }
    } else {
        if (t == INSETO){
            if (a == HEMATOFAGO){
                strcpy(animal_descoberto, "pulga");
            } else if (a == HERBIVORO){
                strcpy(animal_descoberto, "lagarta");
            }
        } else if(t == ANELIDEO){
            if (a == HEMATOFAGO){
                strcpy(animal_descoberto, "sanguessuga");
            } else if (a == ONIVORO){
                strcpy(animal_descoberto, "minhoca");
            }
        }
    }

    printf("%s\n", animal_descoberto);
}

int main() {
    char vertebra[50], classe[50], comida[50];
    scanf("%s", vertebra);
    scanf("%s", classe);
    scanf("%s", comida);

    Categoria cv;
    Classe_animal t;
    Alimentacao a;

    if (strcmp(vertebra, "vertebrado") == 0)
        cv = VERTEBRADO;
    else
        cv = INVERTEBRADO;

    if (strcmp(classe, "ave") == 0)
        t = AVE;
    else if (strcmp(classe, "mamifero") == 0)
        t = MAMIFERO;
    else if (strcmp(classe, "inseto") == 0)
        t = INSETO;
    else
        t = ANELIDEO;

    if (strcmp(comida, "carnivoro") == 0)
        a = CARNIVORO;
    else if (strcmp(comida, "onivoro") == 0)
        a = ONIVORO;
    else if (strcmp(comida, "herbivoro") == 0)
        a = HERBIVORO;
    else
        a = HEMATOFAGO;

    descobrir_animal(cv, t, a);

    return 0;
}