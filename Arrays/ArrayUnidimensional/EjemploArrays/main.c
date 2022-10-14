#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Multiplicar todos los elementos de un arreglo\n");

    int values[5], result;

    printf("Ingresa los valores: \n\n");

    for(int n = 0; n < 5; n++) {
        printf("Valor[%i]: ", n + 1);
        scanf("%i", &values[n]);
        if(n == 0)
            result = values[n];
        else
            result *= values[n];
    }

    printf("\n El resultado es: %i\n", result);
    return 0;
}
