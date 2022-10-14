#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()


{

    float f;
    float result;

    printf("Hola, vamos a convertir la temperatura de Farenheit a Celcius \n \n ");

    printf("Ingrese la temperatura en Farenheit: \n");
    scanf("%f", &f);

    result = (f - 32) * 5 / 9;
    printf("La temperatura en Celcius es: %f \n", result);





    return 0;
}
