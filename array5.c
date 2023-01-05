
//  write a program to print ascending and descending order in array.
#include <stdio.h>

int ascending(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
               int temp = arr[i];
               arr[i] = arr[j];
               arr[j] = temp;
            }
        }
    }
}
int printascn(int arr[],int n)
{
    printf("\nAscending :");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

}
int descending(int arr[], int n)
{
    int i, j;
    for (i = 0; i <n-1; i++)
    {
        for (j = i+1; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
               int temp = arr[i];
               arr[i] = arr[j];
               arr[j] = temp;
            }
        }
    }
   
}
int printdesc(int arr[],int n)
{
    printf("\nDescending :");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

}
int main()
{
    int arr[5], i;
    int n = sizeof(arr) / sizeof(arr[0]);
    for (i = 0; i < n; i++)
    {
        printf("Enter the of %d : ", i);
        scanf("%d", &arr[i]);
    }
    printf("Original Array : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    ascending(arr, n);
    printascn(arr,n);
    descending(arr, n);
    printdesc(arr,n);

    return 0;
}