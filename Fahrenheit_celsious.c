#include <stdio.h>

int main()
{
    float F, C;
    printf("Enter Fahrenheit :");
    scanf("%f", &F);
    float ce = (F - 32) * 5 / 9;
    printf("In %f Fahrenheit\n %f Celsius is there.\n", F, ce);

    printf("\nEnter Celisius :");
    scanf("%f", &C);
    float fe = (C * (9 / 5)) + 32;
    printf("In %f Celsius\n %f Fahrenheit is there.", C, fe);

    return 0;
}