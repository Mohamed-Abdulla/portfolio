// #include <stdio.h>
// struct student
// {
//     char name[20];
//     int id;
//     float marks;
// };
// void main()
// {
//     struct student s1, s2, s3;
//     int dummy;
//     printf("Enter the name, id, and marks of student 1 ");
//     scanf("%s %d %f", s1.name, &s1.id, &s1.marks);
//     scanf("%c", &dummy);
//     printf("Enter the name, id, and marks of student 2 ");
//     scanf("%s %d %f", s2.name, &s2.id, &s2.marks);
//     scanf("%c", &dummy);
//     printf("Enter the name, id, and marks of student 3 ");
//     scanf("%s %d %f", s3.name, &s3.id, &s3.marks);
//     scanf("%c", &dummy);
//     printf("Printing the details....\n");
//     printf("%s %d %f\n", s1.name, s1.id, s1.marks);
//     printf("%s %d %f\n", s2.name, s2.id, s2.marks);
//     printf("%s %d %f\n", s3.name, s3.id, s3.marks);
// }

// refer .txt

#include <stdio.h>
#include <string.h>
struct student
{
    int rollno;
    char name[10];
};
int main()
{
    int i;
    struct student st[5];
    printf("Enter Records of 5 students");
    for (i = 0; i < 5; i++)
    {
        printf("\nEnter Rollno:");
        scanf("%d", &st[i].rollno);
        printf("\nEnter Name:");
        scanf("%s", &st[i].name);
    }
    printf("\nStudent Information List:");
    for (i = 0; i < 5; i++)
    {
        printf("\nRollno:%d, Name:%s", st[i].rollno, st[i].name);
    }
    // printf("\nRollno:%d, Name:%s", st[1].rollno, st[1].name);

    return 0;
}