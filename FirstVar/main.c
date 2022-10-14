#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int integerA;
    float floatA;
    double dobA;
    char letterA;

    printf("Ingresa un numero entero: ");

    scanf("%i", &integerA);

    printf("Ingresa un valor con decimal: ");

    scanf("%f", &floatA);

    printf("Ingresa un caracter: ");

    scanf("%c", &letterA);

    printf("EL entero que ingresaste es: %i \n", integerA);
    printf("El decimal que elegiste es: %f \n", floatA);
    printf("El caracter elegido por ti es: %c \n", letterA);

    return 0;


    //Imprimiendo variables
    //printf("The value of our integer A is: %i \n", integerA);
    //printf("The value of our float number is: %f \n", floatA);
    //printf("Our double is: %f \n", dobA);
    //printf("The letter in char is: %c \n", letterA);






}
