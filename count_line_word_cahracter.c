#include <stdio.h>
#include <string.h>

int word_line(char op[])
{
    int i = 0, w = 1, l = 0,a = 0;
    while (op[i] != '\0')
    {
        if (op[i] == ' ')
        {
            w++;
        }
        if( i == 20+a)
        {
            l++;
            a = a + 20;//After every 20 character it will go to new line.
        }
        i++;
    }
    printf("\nNumber of words : %d", w);
    printf("\nNumber of lines : %d", l);
}

int main()
{
    char op[100];
    printf("Enter the string : \n");
    gets(op);
    int len = strlen(op);
    printf("Number of characters : %d", len);
    word_line(op);
}
