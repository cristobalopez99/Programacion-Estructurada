#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Ejemplo Array loops\n");
    printf("Vamos a decirte cual es el numero mas grande del array: \n");


    int elArray[5] = {8, 9, 23, 56, 87};
    int valorArr[5];
    int maxVal = 0;

    printf("Ingrese los numeros que desea verificar: \n");

    for(int i = 0; i < 5; i++) {
        if(maxVal < valorArr[i]) {
            maxVal = valorArr[i];
        }
    }

    printf("El valor maximo es: %i \n", maxVal);

    return 0;
}
