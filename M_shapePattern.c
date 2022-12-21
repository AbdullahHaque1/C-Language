#include <stdio.h>
int main()
{
    int n;
    // input should odd number
    scanf("%d", &n);
    int m = n/2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == 0 || j == n-1 || (i <= m  && i == j) || (i < m && (n -1 - i) == j))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}