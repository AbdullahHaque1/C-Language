#include<stdio.h>
int main()
{
    FILE *fp = NULL;
    char ch;
    int a = 1;
    fp = fopen("PRI.txt","r");
    if(fp == NULL)
    {
        printf("File is empty. ");
        return 0;
    }
    while(1)
    {
        ch = fgetc(fp);
        if(ch == EOF)
        break;

        if(ch == '\n')
        a++;
    }
    printf("%d",a);
    fclose(fp);
    return 0;
}