#include <stdio.h>
#include <stdlib.h>

int sol(char str[], char ins[], char store[], int pos)
{
    int i = 0, j = 0,k = 0;
    while (str[i] != '\0' )
    {
        if (i == pos)
        {
          while(str[k] != '\0')
          {
            store[j] = ins[k]; 
            
            k++;
            j++;
          }
        }
        else{
            store[j] = str[i];
            j++;
        }
        i++;
    }
    store[j] = '\0';
    printf("Updated string :\n");
    puts(store);
}
int main()
{
    char string[100], insert[50],store[100];
    int pos;
    printf("Enter the main string :\n");
    gets(string);
    printf("Enter the string to be inserted :\n");
    gets(insert);
    printf("Enter the position to insert :");
    scanf("%d", &pos);
    sol(string,insert,store,pos);
}