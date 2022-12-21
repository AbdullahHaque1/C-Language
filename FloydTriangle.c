#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    //line below is to print digit pattern
    // int a = 1;
    //Line below is to print alphbetical pattern
    char a = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c ",a);
            a++;
        }
        printf("\n");
    }

    return 0;
}