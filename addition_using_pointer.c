#include<stdio.h>

int main()
{
    int a = 4,b = 7,c;
    int *p,*r;
    p = &a;
    r = &b;
    c = *p+*r;
    printf("Addition is : %d",c);

    return 0;
}