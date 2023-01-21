//Write a program to copy a file in another name.
#include<stdio.h>
int main()
{
    FILE *fp1,*fp2;
    char ch;
    fp1 = fopen("main.txt","r");
    fp2 = fopen("copy.txt","w");
    if(fp1 == NULL)
    {
        printf("File main.txt is empty. ");

    }
    while(1)
    {
        ch = fgetc(fp1);
        if(ch == EOF)
        {
            break;
        }
        fprintf(fp2,"%c",ch);
    }
    
    return 0;
}