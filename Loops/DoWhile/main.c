#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Ciclo Do While \n");

    char answer = 'r';
    char value;

    do
    {
        printf("Ingresa una letra: ");
        scanf("%c", &value);

    }while(value != answer);

    printf("Coinciden las letras %c == %c", value, answer);

    return 0;
}
