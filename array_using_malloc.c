#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter the size of array :\n");
    scanf("%d",&n);
    int *ptr;
    ptr = (int *) malloc(n * sizeof(int));
    if(ptr == NULL)
    {
        printf("Memory is not allocated");
        exit(0);
    }
    else{
    printf("Enter the element of an array :\n");
    for (int  i = 0; i < n; i++)
    {
        scanf("%d",&ptr[i]);
    }
    printf("The element of array are :\n");
    for (int  i = 0; i < n; i++)
    {
        printf("%d ",ptr[i]);
    }

    }
    
    return 0;
}