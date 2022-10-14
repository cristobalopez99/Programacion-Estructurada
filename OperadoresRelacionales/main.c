#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Operadores relacionales \n");

    float valA, valB;

    valA = 15;
    valB = 20;

    if(valA < valB)
        printf("Pregunta 1: cierto \n");
    else
        printf("Pregunta 1: falso \n");

    if(valA <= valB)
        printf("Pregunta 2: cierto \n");
    else
        printf("Pregunta 2: falso \n");

    if(valA > valB)
        printf("Pregutna 3: cierto \n");
    else
        printf("Pregunta 3: falso \n");

    if(valA >= valB)
        printf("Preunta 4: cierto \n");
    else
        printf("Pregunta 4: falso \n");

    if(valA != valB)
        printf("Pregunta 5: cierto \n");
    else
        printf("Pregunta 5 falso \n");

    return 0;
}
