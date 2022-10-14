#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Archivos \n");

    FILE *archivo;
    archivo = fopen("archivo001.dat", "w");

    if(archivo != NULL){
        printf("EL archivo se creo con exito\n");
        fclose(archivo);
    }else {
        printf("El archivo no se ha creado\n");
    }

    return 0;
}
