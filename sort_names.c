#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int n,i,j;
    char str1[50][50],com[50];
    printf("How may names : ");
    scanf("%d",&n);
    fflush(stdin);
    printf("Enter names :\n");
    for(i = 0;i < n; i++)
    {
        gets(str1[i]);

    }
    for(i = 0;i<n;i++)
    {
        for(j = i+1;j < n;j++)
        {
            if(strcmp(str1[i],str1[j])>0)
            {
                strcpy(com,str1[i]);
                strcpy(str1[i],str1[j]);
                strcpy(str1[j],com);
            }
        }
    }
    for(i = 0; i < n; i++)
    puts(str1[i]);

return 0;
}