// Program to encrypt a text file
#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp1, *fp2;
    char ch;
    fp1 = fopen("main.txt", "r");
    if (fp1 == NULL)
    {
        printf("File does not exist . ");
        return 0;
    }
    fp2 = fopen("copy.txt", "w");
    if (fp2 == NULL)
    {
        printf("File does not exist .");
        return 0;
    }
    while ((ch = fgetc(fp1)) != EOF)
    {

        ch = ch + 10;
        fputc(ch, fp2);
    }
    fclose(fp1);
    fclose(fp2);
    fp1 = fopen("main.txt", "w");
    if (fp1 == NULL)
    {
        printf("File does not exist .");
        fclose(fp2);
        return 0;
    }
    fp2 = fopen("copy.txt","r");
    if(fp2 == NULL)
    {
        printf("File does not exist .");
        return 0;
    }
    while((ch = fgetc(fp2)) != EOF)
    {
        fputc(ch,fp1);
    }
    return 0;
}

// Program to decrypt a previously encrypted
#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp1, *fp2;
    char ch;
    fp1 = fopen("main.txt", "w");
    if (fp1 == NULL)
    {
        printf("File does not exist . ");
        return 0;
    }
    fp2 = fopen("copy.txt", "r");
    if (fp2 == NULL)
    {
        printf("File does not exist .");
        return 0;
    }
    while ((ch = fgetc(fp2)) != EOF)
    {

        ch = ch - 10;
        fputc(ch, fp1);
    }
    fclose(fp1);
    fclose(fp2);
 
    return 0;
}
