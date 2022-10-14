#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Array unidimensional!\n");

    int numsList [3];

    numsList[0] = 7;
    numsList[1] = 2;
    numsList[2] = 5;

    float pointList[] = {12.2, 45.5, 14.3, 4.6, 2.8};

    char letterList[4];

    letterList[0] = 'C';
    letterList[1] = 'R';
    letterList[2] = 'I';
    letterList[3] = 'S';

    printf("\n The first integer: \t \t %i", numsList[2]);
    printf("\n The first float: \t \t %f", pointList[1]);
    printf("\n The first letter: \t %c%c%c%c. \n", letterList[0], letterList[1], letterList[2], letterList[3]);

    return 0;
}
