#include<stdio.h>
int main()
{
    char word[25];
    printf("Enter the words :\n");
    gets (word);
    int i = 0,a= 1;
    while(word[i] != '\0')
    {
        if(word[i]==' ')
        a++;

        i++;
    }
    printf("number of words :%d",a);
    return 0;
}