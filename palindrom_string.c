#include <stdio.h>
#include <string.h>
int main()
{
    char p[10];
    printf("Enter the string : ");
    gets(p);
    int l = strlen(p);

    int s = 0, e = l - 1;
    while (l > s)
    {

        if (p[s++] != p[e--])
        {
            printf("String is not palindrom ");
            return 0;
        }
    }
    printf("Sting is palindrom");
}