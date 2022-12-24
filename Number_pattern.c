#include <stdio.h>
int main()
{

    int num, i, j, k;
    scanf("%d",&num);
    //Upper part
    for (i = num; i >= 1; i--)
    {
        for (j = num; j > i; j--)
        {
            printf("%d", j);
        }
        for (k = 1; k <= 2 * i - 1; k++)
        {
            printf("%d", i);
        }
        for (j = i+1;j<=num;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    //lower part
    for (i = 1; i < num; i++)
    {
        for (j = num; j > i; j--)
        {
            printf("%d", j);
        }
        for (k = 1; k <= 2 * i - 1; k++)
        {
            printf("%d", i+1);
        }
        for (j = i+1;j<=num;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }

    return 0;
}