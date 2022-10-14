#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Arrays and loops \n");

    int entArray[11];

    for(int i = 0; i < 11; i++) {
        entArray[i] = i * i;
        printf("Valor (%i): %i \n", i, entArray[i]);


    }
    return 0;
}
