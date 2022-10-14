#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Condicional IF \n");

    float valA, valB, valC;
    valA = valB = 100;

    printf("Primera condicion \n");
     if(valA == valB)
        printf("Los dos son iguales \n");

     printf("Segunda condicion \n");
     if(valA == valB) {
        printf("Ambos valores son los mismos \n");
        valC = valA + valB;
        printf("La suma de ambos es: %f", valC);
     }

    return 0;
}
