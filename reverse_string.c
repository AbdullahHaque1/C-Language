#include <stdio.h>

int main()
{
    char c[10], rs[10];
    printf("Enter the string to be reversed :\n");
    gets(c);
    int l = 0;
    while (c[l] != '\0')
    {
        l++;
    }
    
    int i = 0, j = l - 1;
    while (i < l)
    {
        rs[j] = c[i];
        j--;
        i++;
    }
    rs[l] = '\0';
    puts(rs);

    return 0;
}