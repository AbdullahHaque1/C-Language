#include <stdio.h>
int maxmin(int arr[], int size, int *max, int *min)
{
    *max = arr[0];
    *min = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (*max < arr[i])
        {
            *max = arr[i];
        }
        else if (*min > arr[i])
        {
            *min = arr[i];
        }
    }
}

int main()
{
    int max, min;
    int arr[10] = {10, 33, 55, 90, 22, 88, 11, 7, 13, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    maxmin(arr, n, &max, &min);
    printf("Maximum is : %d \nMinimum is : %d ", max, min);
    return 0;
}