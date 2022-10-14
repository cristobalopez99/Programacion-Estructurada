#include <stdio.h>
#include <stdlib.h>

int Sumando(int a, int b)
{
    int result = a + b;
    return result;
}

int main()
{
    printf("Funciones \n");

    int sumRes = Sumando(8, 9);

    printf("EL restusltado es: %i", sumRes);

    return 0;
}
