#include<stdio.h>

int main()
{
    int arr[10] = { 1,2,-7,3,-8,9,0,4,-5,0};
    int a = 0,b = 0,c = 0;
      for(int i = 0; i < 10;i++)
    {
        if(arr[i]>0)
        {
            a++;
        }
        else if(arr[i]<0)
        {
            b++;
        }
        else{
            c++;
        }
    }
    printf("No of +ve interger :%d\nNo of -ve integer :%d\nNo of zeros :%d",a,b,c);
    return 0;
}