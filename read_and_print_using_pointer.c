

#include<stdio.h>

int main()
{
    
    int arr[10],i;
    int *p;
    p=arr;
    printf("Enter the value of array :\n");
    for( i = 0;i<5;i++)
    {
        scanf("%d",p);
        p++;
    }
    p=arr;
    printf("The value of array are: ");
    for(i = 0;i<5;i++)
    {
        printf("%d ",*p);
        p++;
    }

}