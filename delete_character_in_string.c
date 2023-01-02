#include <stdio.h>
#include<string.h>
int main()
{
    char str[30],d;
    gets(str);
    printf("Enter the character to delete :");
    scanf("%c", &d);
    int i = 0,a;
    while (str[i] != '\0')
    {
        if (str[i] == d)
        {
            a++;
        }
        else{
            printf("%c",str[i]);
        }
        i++;
    }
}