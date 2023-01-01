#include<stdio.h>

int main()
{
    char pat[10];
    gets(pat);
    int len = 0;
    while(pat[len] != '\0')
    {
        len++;
    }
    for(int i = 0; i < len; i++ )
    {
        for(int j = 0; j <= i; j++)
        {
            printf("%c ",pat[j]);
        }
        printf("\n");
    }

    return 0;
}