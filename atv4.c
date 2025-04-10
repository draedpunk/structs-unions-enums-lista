//enums
#include <stdio.h>
typedef enum Meses {
    january = 1, february = 2, march =3, 
    april = 4, may=5, june = 6, july =7, august = 8, 
    september = 9, october = 10, november = 11,
    december = 12
} meses;

int main(){
    int num;
    printf("Informe um numero: ");
    scanf("%d", &num);

    meses mes = num;

    switch (mes)
    {
    case 1:
        printf("January");
        break;
    case 2:
        printf("February");
        break;
    case 3:
        printf("March");
        break;
    case 4:
        printf("April");
        break;
    case 5:
        printf("May");
        break;
    case 6:
        printf("June");
        break;
    case 7:
        printf("July");
        break;
    case 8:
        printf("August");
        break;
    case 9:
        printf("September");
        break;
    case 10:
        printf("October");
        break;
    case 11:
        printf("November");
        break;
    case 12:
        printf("December");
        break;
    default:
        break;
    }
    return 0;

}