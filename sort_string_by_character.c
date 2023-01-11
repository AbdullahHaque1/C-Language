#include <stdio.h>
#include <string.h>
int main()
{
    char name[10], c;
    printf("Enter the string :\n");
    gets(name);
    int len = strlen(name);
    int i, j;
    for(i = 0;i < len;i++)
    {
        for(j = 0;j < len - 1;j++)
        {
            if (name[j] > name[j + 1])
            {
                c = name[j];
                name[j] = name[j + 1];
                name[j + 1] = c;
            }
        }
    }
    printf("sorted string is :\n");
    puts(name);
    return 0;
}