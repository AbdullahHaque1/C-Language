#include <stdio.h>
int main()
{
    int n,b;
    scanf("%d",&n);

    for (int i = 2; i <= n; i++)
    {
        b = 0;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                b = 1;
                break;
            }
        }
        if(b==0){
        printf("%d\n",i);
        }
    }

    return 0;
}