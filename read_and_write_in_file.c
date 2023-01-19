//Write a program to read a text file character by character and write its content twice in a separate file
#include<stdio.h>
int main()
{
    char str[50];
    FILE *fp = NULL;
    fp = fopen("character.txt","r");//character.txt is a file storing characters.
    fscanf(fp,"%s",&str);
    printf("Reading characters from txt file :\n%s",str);

    printf("\n\nWriting its content twice in a separate file. \n\n");

    char str1[100] = " File handling ";

    fp = fopen("character1.txt","a");//to append the contant as many times we want . 
    fprintf(fp,"%s",str1);
    printf("The string in txt file is :\n%s",str1);
    fclose(fp);
    return 0;
}