#include<stdio.h>

int main()
{
    int num;
    scanf("%d",&num);
    printf("Printing hollow rectangle :\n");
    for(int i = 1;i<=num-2;i++)
    {
        for(int j = 1; j <=num; j++)
        {
            if(i == 1 || j == 1 || i == num-2 || j == num)
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}