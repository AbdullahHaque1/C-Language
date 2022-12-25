#include <stdio.h>

int fibo(int r)
{
    if (r == 0 || r == 1)
    {
        return r;
    }
    else
    {
        return fibo(r - 1) + fibo(r - 2);
    }
}
int main()
{
    int n;
    printf("Enter the range :");
    scanf("%d", &n);
    printf("Fibonacci Series is : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",fibo(i));
    }

    return 0;
}