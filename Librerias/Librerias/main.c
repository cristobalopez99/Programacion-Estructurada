#include <stdio.h>
#include <stdlib.h>
#include "Operaciones.h"

int main()
{
    printf("Librerias \n");

    float first = 45;
    float second = 20;
    float result;
    int option;

    printf("Soy una calculadora! \n");
    printf("Que operacion quieres que realice?\n");
    printf("1. Suma\n");
    printf("2. Resta\n");
    printf("3. Multiplicacion\n");
    printf("4.Division\n");
    printf("Elige una opcion: \n");

    scanf("%i", &option);

    switch(option){
    case 1:
        result = addition(first, second);
        break;
    case 2:
        result = substraction(first, second);
        break;
    case 3:
        result = multiplication(first, second);
        break;
    case 4:
        result = division(first, second);
        break;
    }

    printf("El resultado de la operacion es: %f", result);
    return 0;
}
