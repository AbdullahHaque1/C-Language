 #include<stdio.h>
 int main()
 {
     int a,b;
     scanf("%d%d",&a,&b);
     printf(" Value of a = %d and b = %d before swapping ",a,b);

    a = a^b;
    b = a^b;
    a = a^b;

    printf(" \nValue of a = %d and b = %d after swapping ",a,b);

    return 0;
}