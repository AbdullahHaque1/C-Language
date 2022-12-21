#include<stdio.h>
void VoOrCon(char ch)
{
   int b = 0;
   switch(ch)
   {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    b++;
   }
   if(b==1)
   {
    printf("Entered Character is Vowel ");
   }
   else
   printf("Entered Character is Consonent ");
}
int main()
{
    char ch;
    scanf("%c",&ch);
    VoOrCon(ch);
    return 0;
}
