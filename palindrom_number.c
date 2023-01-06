#include <stdio.h>

int main()
{
    int n, ans = 0, b;
    scanf("%d", &n);
    b = n;
    while (n != 0)
    {
        int d = n % 10;
        ans = ans * 10 + d;
        n = n / 10;
    }
    if (ans == b)
    {
        printf("Entered Number is Palindrom ");
    }
    else
    {
        printf("Entered Number is Not Palindrom ");
    }

    return 0;
}