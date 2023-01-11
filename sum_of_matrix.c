#include<stdio.h>

int main()
{
    int m,n,i,j;
    scanf("%d%d",&m,&n);
    int m1[m][n],m2[m][n],sum[m][n];
    printf("Enter the 1st matrix :\n");
    for(i = 0;i<m;i++)
    {
        for(j = 0;j<n;j++)
        {
            scanf("%d",&m1[i][j]);
        }
    }
    printf("Enter the 2nd matrix :\n");
    for(i = 0;i<m;i++)
    {
        for(j = 0;j<n;j++)
        {
            scanf("%d",&m2[i][j]);
        }
    }

    //sum of matrix
    for(i = 0;i<m;i++)
    {
        for(j = 0;j<n;j++)
        {
            sum[i][j] = 2 * m1[i][j] + 3 * m2[i][j];
        }
    }
    //printing the matrix
    printf("Sum of matrix is :\n");
    for(i = 0;i<m;i++)
    {
        for(j = 0;j<n;j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }


}