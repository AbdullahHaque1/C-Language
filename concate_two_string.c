

#include <stdio.h>

int main()
{
    char p[20], q[20];

    printf("Enter the first string:\n");
    gets(p);   
    printf("Enter the second string:\n");
    gets(q);   

    char *a = p;
    char *b = q;

    while(*a) 
    {
        a++;   
    }
    while(*b)  
    {
        *a = *b;
        b++;
        a++;
    }
    *a = '\0'; 
    printf("The string after concatenation is: %s ", p);
    return 0;
}