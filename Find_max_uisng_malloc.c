
#include<stdio.h>
#include<stdlib.h>

int Max(int *ptr,int n)
{
    int i,max = 0;
    for( i = 0; i < n; i++)
        {
            if(ptr[i] > max)
            max = ptr[i];
        }

        printf("Maximum number in an array is : %d",max);
}
int main()
{
    int n,i;
    printf("Enter the size :\n");
    scanf("%d",&n);
    int *ptr;
    ptr = (int *) malloc (n * sizeof(int));

    if(ptr == NULL)
    {
        printf("Memory is not allocated ");
        exit(0);
    }
    else{
        printf("Enter the element of array :\n");
        for( i = 0; i < n; i++ )
        {
            scanf("%d",&ptr[i]);
        }

        Max(ptr,n);
    }
}