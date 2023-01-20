#include<stdio.h>
#include<string.h>
int main()
{
    FILE *fp;
    char str1[20],str2[20];
    int sal1,sal2;
    printf("Enter the name of empolyees :\n");
    gets(str1);
    gets(str2);
    printf("Enter the salary of empolyees :\n");
    scanf("%d%d",&sal1,sal2);
    //opening a file in write mode.
    fp = fopen("PRI.txt","w");
    fprintf(fp,"%s,%d\n",str1,sal1);
    fprintf(fp,"%s,%d",str2,sal2);
    fclose(fp);
    return 0;
}