#include <stdio.h>
#include <stdlib.h>

int factorial(int n){
    printf("Entra a la funcion facto, n vale: %i \n", n);

    if(n > 1) {
        printf("La funcion se llamará a si misma otra vez \n");
        return n * factorial(n - 1);
    }else {
        printf("n es igual a 1, termina la funcion \n");
        return 1;
    }
}

int main()
{
    printf("Recursividad \n");

    int result = factorial(6);
    printf("\nEl resultado es: %i", result);

    return 0;
}
