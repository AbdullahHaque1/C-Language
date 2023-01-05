//sort all elements of 2 D array row wise having 3 row and 3 column.

#include <stdio.h>

int main()
{
    int arr[3][3], i, j ,k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for(k = j+1; k<3; k++)
            {
                if(arr[i][j] > arr[i][k])
                {
                    int temp = arr[i][j];
                    arr[i][j] = arr[i][k];
                    arr[i][k] = temp;
                }
            }
        }
    }
    printf("row by row sorted :\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}