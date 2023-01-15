#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, i;
    printf("Enter the size of array :\n");
    scanf("%d",&n);
    int *ptr;
    ptr = (int *) malloc(n * sizeof(int));
    if(ptr == NULL)
    {
        printf("Memory is not allocated ");
    }
    else{
        printf("Enter the element of array :\n");
        for ( i = 0; i < n; i++)
        {
            scanf("%d",&ptr[i]);
        }
        printf("The element of array are : ");
        for ( i = 0; i < n; i++)
        {
            printf("%d ",ptr[i]);
        }
        
    }
    printf("\nEnter the new size of array :\n");
    scanf("%d",&n);
    ptr = (int *) realloc(ptr,n * sizeof(int));
    if(ptr == NULL)
    {
        printf("Memory is not allocated ");
    }
    else{
        printf("Enter the element of new array :\n");
        for ( i = 0; i < n; i++)
        {
            scanf("%d",&ptr[i]);
        }
        printf("The element of new array are : ");
        for ( i = 0; i < n; i++)
        {
            printf("%d ",ptr[i]);
        }
        
    }
}