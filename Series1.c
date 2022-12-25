#include<stdio.h>
#include<math.h>
int main()
{
    int n ;
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            int e = pow(i,2);
            printf("-%d ",e);
        }
        else{
            int o = pow(i,2);
            printf("%d ",o);
        }
    }
    return 0;
}