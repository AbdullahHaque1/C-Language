// Program to remove a file.
#include <stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("character.txt", "r");
    if (fp != NULL)
    {
        if (remove("character1.txt") == 0)
        {
            printf("File is removed successfully.");
        }
        else
        {
            printf("File is not removed.");
        }
    }
    else
    {
        printf("File is not present.");
    }

    return 0;
}
