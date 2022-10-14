#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Elige dos numeros, yo te diere cual es el menor\n");

    int num1, num2;


    printf("Ingresa el primer numero: ");
    scanf("%i", &num1);

    printf("Ingresa otro numero: ");
    scanf("%i", &num2);

    printf("\nEl numero menor es: ");
    if(num1 < num2) {
        printf("%i", num1);
    } else {
        printf("%i", num2);
    }



    return 0;
}
