#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valA, valB, valC;

    valA = 8;
    valB = valC = 10;

    if((valA < valB) && (valB == valC))
        printf("Se cumplieron ambas condiciones \n");
    else
        printf("No se cumplieron ambas condiciones \n");

    if((valA > valB) || (valA <= valC))
        printf("Se cumplio al menos una condicion");
    else
        printf("No se cumplio ni una condicion \n");


    return 0;
}
