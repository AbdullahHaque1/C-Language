
// M-1
#include<stdio.h>

int main()
{
    printf("Hello World!!");

    return 0;
}

#include<stdio.h>

// M-2
int main()
{
    char H[] = "Hello World";

    int i = 0;
    while(H[i]!='\0')
    {
        printf("%c",H[i]);
        i++;
    }

    return 0;
}