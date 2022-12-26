#include <stdio.h>
int main()
{
    int m, n, mat[10][10], tran[10][10];
    printf("Enter number of rows and columns :\n");
    scanf("%d%d", &m, &n);

    printf("Enter elements of the matrix :\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    printf("Entered matrix is :\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            tran[j][i] = mat[i][j];
        }
    }
    printf("Transpose of matrix is :\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d  ", tran[i][j]);
        }
        printf("\n");
    }

    return 0;
}