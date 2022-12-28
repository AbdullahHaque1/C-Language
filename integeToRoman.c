//M-2
#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    while (num)
    {
        if (num < 4)
        {
            for (int i = 1; i <= num; i++)
            {
                printf("I");
            }
            num = num % 1;
        }
        else if (num == 4)
        {
            printf("IV");
            num = num % 4;
        }
        else if (num >= 5 && num < 9)
        {
            printf("V");
            num = num % 5;
        }
        else if(num == 9)
        {
            printf("IX");
            num = num % 9;
        }
        else if (num >= 10 && num < 40)
        {
            printf("X");
            num = num % 10;
        }
        else if (num >= 40 && num < 50)
        {
            printf("XL");
            num = num % 40;
        }
        else if (num >= 50 && num < 90)
        {
            printf("L");
            num = num % 50;
        }
        else if (num >= 90 && num < 100)
        {
            printf("XC");
            num = num % 90;
        }
        else if (num >= 100 && num < 400)
        {
            printf("C");
            num = num % 100;
        }
        else if (num >= 400 && num < 500)
        {
            printf("CD");
            num = num % 400;
        }
        else if (num >= 500 && num < 900)
        {
            printf("D");
            num = num % 500;
        }
        else if (num >= 900 && num < 1000)
        {
            printf("CM");
            num = num % 900;
        }
        else if (num >= 1000)
        {
            printf("M");
            num = num - 1000;
        }
    }

    return 0;
}


//M-2
#include<stdio.h>
int integertoroman(int n)
{

    char *roman[] = { "M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    int integer[] = { 1000,900,500,400,100,90,50,40,10,9,5,4,1 };
    int i = 0;
    while(n)
    {
        while(n/integer[i])
        {
            printf("%s",roman[i]);
            n -=integer[i];
        }
        i++;
    } 
}
int main()
{

    int num;
    printf("Enter the integer value: ");
    scanf("%d",&num);
    integertoroman(num);
    
    return 0;
}