#include <stdio.h>

int main()
{
    struct student
    {
        char name[20];
        char subject[20];
        int roll_no;
        int class;
    } s1, s2, s3;

    printf("Enter names,subjects,roll no and marks :\n");
    scanf("%s%s%d%d", s1.name, s1.subject, &s1.roll_no, &s1);
    scanf("%s%s%d%d", s2.name, s2.subject, &s2.roll_no, &s2);
    scanf("%s%s%d%d", s3.name, s3.subject, &s3.roll_no, &s3);

    printf("Printing data of student :\n");
    printf("%s %s %d %d\n", s1.name, s1.subject, s1.roll_no, s1);
    printf("%s %s %d %d\n", s2.name, s2.subject, s2.roll_no, s2);
    printf("%s %s %d %d\n", s3.name, s3.subject, s3.roll_no, s3);
    return 0;
}