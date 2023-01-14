//Write any program which illustrates the use of a pointer to a three dimensional array.
#include <stdio.h>

int main()
{
    int arr[3][3][3], i, j, k;
    int *po = &arr[3][3][3];
    printf("Enter the 3d array :\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                scanf("%d", &arr[i][j][k]);
            }
        }
    }

    printf("3D-Array is :\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                printf("%d ",*(*(*(arr+i)+j)+k));
            }
            printf("\n");
        }
    }
}