#include <stdio.h>

int main()
{
    int sec, min, hr;
    printf("Enter Second :");
    scanf("%d", &sec);
    hr = sec / (3600);
    min = (sec-(3600*hr) )/ 60;
    sec = (sec - (hr*(60*60))-(min*60));
    printf(" %d hour %d minutes  %d second ", hr, min, sec);

    return 0;
}