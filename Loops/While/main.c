#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Loop While \n");

    int limit;
    printf("Ingresa un numero:  \n");
    scanf("%i", &limit);

    int i = 1;

    while(i <= limit) {
        printf("Numero: %i \n", i);
        i++;
    }
    return 0;
}
