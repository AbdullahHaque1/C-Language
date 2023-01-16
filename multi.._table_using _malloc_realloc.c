#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr, i;
    ptr = (int *)malloc(10 * sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory is not allocated ");
        exit(0);
    }
    else
    {
        printf("Multiplication table of 7 upto 10 :\n");
        for (i = 1; i <= 10; i++)
        {
            printf("%d * %d = %d\n", 7, i, 7 * i);
        }
    }
    // now using realloc to make it store upto 15
    ptr = (int *)realloc(ptr, 15 * sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory is not allocated ");
        exit(0);
    }
    else
    {
        printf("Multiplication table of 7 upto 15 :\n");
        for (i = 0; i <= 15; i++)
        {
            printf("%d * %d = %d \n",7,i,7 * i);
        }
    }

    return 0;
}