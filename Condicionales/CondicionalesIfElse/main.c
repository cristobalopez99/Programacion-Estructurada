#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Condicionales if, else, else if \n");

    float valA, valB, valC;
    valA = 20;
    valB = 50;
    valC = 100;

    printf("Condicion if \n");

    if(valA == valB)
        printf("No son iguales Bro' \n");
    else if(valB == valC)
        printf("Tampoco Bro' \n");
    else {
        printf("Ninguna de las condiciones se cumplieron \n");
        printf("Aqui acabamos, Bye");
    }

    return 0;
}
