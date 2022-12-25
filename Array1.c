#include<stdio.h>
int Inserting(int arr[],int size, int k,int index)
{
    for(int i = 0 ; i < size ; i++)
    {
        if(arr[i] == arr[index])
        {
            arr[i] = k;
        }
    }

}
int printarr(int arr[],int n)
{
    for(int i = 0; i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
int main()
{
    int arr[5] = {1,5,8,3,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key;
    printf("Enter the key to be inserted :");
    scanf("%d",&key);
    int ind;
    printf("Enter the position to insert element :");
    scanf("%d",&ind);
    Inserting(arr,n,key,ind);
    printarr(arr,n);
}