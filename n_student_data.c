#include<stdio.h>

void main()
{
    struct students
    {
        char name[20];
        int roll_no;
        int class;

    };

    int i = 1,n;
    printf("Enter number of student :");
    scanf("%d",&n);
    struct students s[n];
    while(i<=n)
    {
        printf("Student %d : name ,roll_no & class :\n",i);
        scanf("%s%d%d",s[i].name,&s[i].roll_no,&s[i].class);
        i++;
    }
    printf("Students data :\n");

    for(int i = 1; i <= n; i++ )
    {
        printf("Student ::%d\nName :%s\nRoll_no :%d\nClass :%d \n\n",i,s[i].name,s[i].roll_no,s[i].class);
    }
    
}