#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Switch \n");

    int option;

    scanf("%i", &option);

    switch(option) {
    case 1:
        printf("Elegiste el numero 1 \n");
        break;
    case 2:
        printf("Elegiste el numero 2 \n");
        break;
    case 3:
        printf("Elegiste el numero 3 \n");
        break;
    default:
        printf("Elegiste un numero invalido \n");
        break;
    }

    return 0;
}
