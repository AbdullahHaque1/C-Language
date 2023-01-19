//Write a program to read integers from a file.

#include<stdio.h>

int main()
{
    int n;
    FILE *fp = NULL;
    //Opening a file in read mode.
    fp = fopen("integer.txt","r");//integert.txt is a file storing integers.
    fscanf(fp,"%d",&n);
    printf("The integer is : %d",n);
    fclose(fp);
    return 0;
}
