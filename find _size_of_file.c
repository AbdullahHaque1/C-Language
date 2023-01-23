// Program to find a size of file.
#include<stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("size.txt","r");

    if(fp == NULL)
    {
        printf("File not found.");
        return 0;
    }
    fseek(fp,0,SEEK_END);
    int n = ftell(fp);
    printf("Size of File is : %d",n);

    return 0;
}