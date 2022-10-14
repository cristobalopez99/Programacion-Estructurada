#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rSum;
    float rRes;
    float rDiv;
    float rMult;
    int rMod;

    rSum = 5 + 8;
    rRes = 5.8 - 4.3;
    rDiv = 12 / 8;
    rMult = 8 * 9;
    rMod = 15 / 4;

    printf("The result of the sum is: %i \n", rSum);
    printf("The result of the subtraction is: %f \n", rRes);
    printf("The result of the division is: %f \n", rDiv);
    printf("The result of the multiplication is: %f \n", rMult);
    printf("The result of the module is: %i \n", rMod);

    return 0;
}
