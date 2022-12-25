// Swapping with extra variable
#include<stdio.h>

int swap(int c ,int b)
{
    int d = c;
    c= b;
    b = d;
    printf("After swaping %d b  %d",c,b);
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    swap(a,b);
}

//Swapping without extra variable
#include<stdio.h>

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf(" Value of a = %d and b = %d before swapping ",a,b);

    a = a+b;
    b = a-b;
    a = a-b;

    printf(" \nValue of a = %d and b = %d after swapping ",a,b);

}
