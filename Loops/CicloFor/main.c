#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Loop´For \n");

    int number, number1;
    printf("Imprimir descendiendo \n");
    scanf("%i", &number);

    printf("Imprimier ascendiendo \n");
    scanf("%i", &number1);

    for(int i = number; i >= number1; i--) {
        printf("Numero %i \n", i);

    }
    return 0;
}
