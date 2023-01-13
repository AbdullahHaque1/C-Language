#include<stdio.h>

int main()
{
    int m,i,j;
    scanf("%d",&m);
    //For addition of matrix, order of both the matrix must be same.
    int m1[m][m],m2[m][m],sum[m][m];
    printf("Enter the 1st matrix :\n");
    for(i = 0;i<m;i++)
    {
        for(j = 0;j<m;j++)
        {
            scanf("%d",&m1[i][j]);
        }
    }
    printf("Enter the 2nd matrix :\n");
    for(i = 0;i<m;i++)
    {
        for(j = 0;j<m;j++)
        {
            scanf("%d",&m2[i][j]);
        }
    }

    //sum of matrix
    for(i = 0;i<m;i++)
    {
        for(j = 0;j<m;j++)
        {
            sum[i][j] = 2 * m1[i][j] + 3 * m2[i][j];
        }
    }
    //printing the matrix
    printf("Sum of matrix is :\n");
    for(i = 0;i<m;i++)
    {
        for(j = 0;j<m;j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }


}