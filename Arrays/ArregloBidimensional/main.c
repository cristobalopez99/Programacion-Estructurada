#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Bidimensional Array \n");

    int bidiArray[4][4];

    bidiArray[0][0] = 10;
    bidiArray[0][1] = 15;
    bidiArray[0][2] = 12;
    bidiArray[0][3] = 16;

    bidiArray[1][0] = 23;
    bidiArray[1][1] = 20;
    bidiArray[1][2] = 25;
    bidiArray[1][3] = 22;

    bidiArray[2][0] = 26;
    bidiArray[2][1] = 28;
    bidiArray[2][2] = 30;
    bidiArray[2][3] = 27;

    bidiArray[3][0] = 29;
    bidiArray[3][1] = 31;
    bidiArray[3][2] = 30;
    bidiArray[3][3] = 32;

    printf("Valor en (0,0): %i \n", bidiArray[0][0]);
    printf("Valor en (0,1): %i \n", bidiArray[0][1]);
    printf("Valor en (0,2): %i \n", bidiArray[0][2]);
    printf("Valor en (0,3): %i \n", bidiArray[0][3]);

    return 0;
}
