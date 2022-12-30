#include<stdio.h>

int main()
{
    char chara[30],c,r;
    printf("Enter the characters :\n");
    gets(chara);
    printf("Enter the character to be replaced :");
    scanf("%c",&c);
    printf("Enter new character :");
    scanf(" %c",&r);
    int i = 0;
    while(chara[i] != '\0')
    {
        if(chara[i] == c )
        {
            chara[i] = r;
        }
        i++;
    }
    puts(chara);
    return 0;
}