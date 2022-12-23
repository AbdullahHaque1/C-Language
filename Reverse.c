#include <stdio.h>

int main()
{
    int num , ans = 0;
    printf("Enter the number to be reversed :\n");
    scanf("%d", &num);
    while (num != 0)
    {
        int digit = num % 10;
        ans = ans * 10 + digit;
        num /=10;
    }
    printf("Reversed number is %d ",ans);

    return 0;
}
