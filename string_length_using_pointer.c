#include <stdio.h>

int strlength(char *str)
{
    int l = 0;
    while(*str != 0)
    {
        l++;
        str++;
    }
    printf("String length is : %d",l);
}
int main()
{
    char str[] = "hello";
    strlength(str);

    return 0;
    
}