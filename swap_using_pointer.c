#include<stdio.h>

int Swap(int *a,int *b)
{
    int *p = a;
    a =b;
    b = p;
    printf("Value of a : %d and b : %d after swap  ",*a,*b);

}
int main()
{
    int a, b;
    scanf("%d%d",&a,&b);
    printf("Value of a : %d and b : %d before swap \n",a,b);
    Swap(&a,&b);

    return 0;
}