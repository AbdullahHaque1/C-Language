#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20],str2[20],*str3,*str4;
    printf("Enter the first string :");
    gets(str1); 
    printf("Enter the second string :");
    gets(str2);
    str3 = str1;
    str4 = str2;
    if(*str3 == *str4)
    printf("string is same ");
    else{
        printf("string is not same");
    }

}