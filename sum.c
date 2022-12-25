#include<stdio.h>
int main()
{
    static int a = 2 , b =6;
    int c = a + b;
    printf("Sum is %d ",c);

    return 0;
}