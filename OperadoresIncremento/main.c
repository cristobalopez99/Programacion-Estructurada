#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Opercaciones de incrememnto y decremento \n");

    int value, res;

    value = 20;
    res = value++;

    printf("Resultado: %i \n", res);

    value = 20;

    res = ++value;
    printf("Resultado: %i \n", res);


    return 0;
}
