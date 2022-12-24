#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        int P= 1;
        for (int j = 1; j < num - i; j++)
        {
            printf("  ");
        }
        for (int k = 0; k <= i; k++)
        {
            printf("   %d", P);
            P = P*(i-k)/(k+1);
        }
        printf("\n");
    }
    
}