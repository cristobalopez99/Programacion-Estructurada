#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Aca estamos en el ejercicio \n");

    int num = 5;

    printf("Elige un numero del 1 al 10: \n");
    scanf("%i", &num);

    if(num == 5)
        printf("Lo has adivinado maquina \n");
    else
        printf("Ese no era, siguelo intentando \n");


    return 0;
}
