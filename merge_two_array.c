#include<stdio.h>

int merge_two_array(int arr1[],int arr2[], int n1,int n2)
{
    int i,j,k = 0,t;
    for(i = 0;i<n1;i++)
    {
        arr1[n1+i] = arr2[i];
    }
   
    printf("After merging two array :\n");
    for(i = 0; i<n1+n2;i++)
    {
        printf("%d ",arr1[i]);
    }
}

int main()
{
    int arr1[] = {1,2,3,4};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int arr2[] = {5,6,7};
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    merge_two_array(arr1,arr2,n1,n2);
    
    return 0;
}