#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Estos son operadores de asignancion \n");

    int value;

    value = 8;
    printf("El valor de nuestra variable es: %i \n", value);

    value += 1;
    printf("El valor de nuestra variable es: %i \n", value);

    value -= 2;
    printf("El valor de nuestra variable es: %i \n", value);

    value *= 5;
    printf("El valor de nuestra variable es: %i \n", value);

    value /4;
    printf("El valor de nuestra variable es: %i \n", value);

    value %6;
    printf("El valor de nuestra variable es: %i \n", value);



    return 0;
}