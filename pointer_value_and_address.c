#include<stdio.h>
int main()
{
    int a,*p;
    scanf("%d",&a);
    p = &a;
    printf("Address of a :%d\nAddress of p :%d\n",&a,p);
    printf("Value of a :%d\nValue of p :%d",a,*p);
}