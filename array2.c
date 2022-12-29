//Formal paramerter as pointer
#include<stdio.h>

int Sum(int* arr,int size)
{
    int sum = 0;
    for(int i = 0; i < size ; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}
int main()
{
    int arr[5] = { 1,3,5,7,6}; 
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Sum is %d",Sum(arr,n));

    return 0;
}

//Formal paramerter as sized array
#include<stdio.h>

int Sum(int arr[5],int size)
{
    int sum = 0;
    for(int i = 0; i < size ; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}
int main()
{
    int arr[5] = { 1,3,5,7,6}; 
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Sum is %d",Sum(arr,n));

    return 0;
}


//Formal paramerter as unsized array
#include<stdio.h>

int Sum(int arr[],int size)
{
    int sum = 0;
    for(int i = 0; i < size ; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}
int main()
{
    int arr[5] = { 1,3,5,7,6}; 
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Sum is %d",Sum(arr,n));

    return 0;
}