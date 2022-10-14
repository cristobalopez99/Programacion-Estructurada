#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Arrasy Bidi con Loops \n");

    int elArr[4][5];

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 5; j++) {
            elArr[i][j] = ((i + j) * 100 + j);
            printf("(%i, %i): %i \n", i, j, elArr[i][j]);
        }
    }
    return 0;
}
