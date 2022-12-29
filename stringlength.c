#include <stdio.h>
int stringlen(char len[])
{
    int i = 0, a = 0;
    while (len[i] != '\0')
    {
        a++;
        i++;
    }
    return a;
}

int main()
{
    char len[] = "AbdullahHaque";
    printf("Length of string is :%d",stringlen(len));

    return 0;
}