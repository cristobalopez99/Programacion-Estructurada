#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Cadena de caracteres \n");

    char nameA[50];
    int size;

    printf("Ingresar el nombre con gets: \n");

    gets(nameA);
    printf("El nombre es: ");
    puts(nameA);

    size = strlen(nameA);

    printf("\n El largo de la cadena es: %i \n", size);
    return 0;
}
