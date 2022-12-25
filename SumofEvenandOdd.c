#include<stdio.h>

int SumofEvenandOdd(int range,int *e,int *o)
{
    int i = 1;
    *e = 0;
    *o= 0;
    while(i<=range)
    {
        if(i%2==0)
        {
            *e = *e + i;
        }
        else{
            *o = *o + i;
        }
        i++;
    }
}
int main()
{
    int n,even,odd;
    printf("Enter the range :");
    scanf("%d",&n);
    SumofEvenandOdd(n,&even,&odd);
    printf("Sum of even is : %d \nand Odd is :%d",even,odd);
    
    return 0;
}