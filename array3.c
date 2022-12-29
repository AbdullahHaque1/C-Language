#include <stdio.h>
int Numpresent(int arr[], int size, int e)
{
    printf("Elements found at position :\n");
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == e)
        {
            printf("%d ", i);
        }
    }
}
int main()
{
    int arr[10] = {1, 4, 7, 22, 55, 7, 4, 2, 6, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ele;
    printf("Enter the element :");
    scanf("%d", &ele);
    Numpresent(arr, n, ele);
    return 0;
}