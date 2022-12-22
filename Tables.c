#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    printf("Table of %d is :\n",n);
    for(int i = 1;i<=10;i++)
    {
        printf("%d * %d = %d\n",i ,n ,i*n);
    }

    return 0;
}