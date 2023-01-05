#include<stdio.h>

int main()
{
     struct library{
        char name[20];
        int code;
     };

      int n,i,c;
      printf("Enter the no. of books :");
      scanf("%d",&n);
      struct library l[n];
      printf("Enter the name of book and code :\n");
      for(i = 0;i<n;i++)
      {
         scanf("%s%d",l[i].name,&l[i].code);
      }
      printf("Enter the book code to access the book :\n");
      scanf("%d",&c);
      for(i = 0;i<n;i++)
      {
         if(c==l[i].code)
         {
            printf("Book No:- :%d Name :%s Code :%d",i+1,l[i].name,l[i].code);
         }
         
      }

      return 0;
      
}