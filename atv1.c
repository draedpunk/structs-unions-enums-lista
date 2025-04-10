#include <stdio.h>

int main()
{
    struct Horario{
        int hour;
        int min;
        int sec;
        
    } typedef Horario;
    
    Horario dormir = {26, 14, 59};
    printf("%d:%d:%d\n", dormir.hour, dormir.min, dormir.sec);

    return 0;
}
