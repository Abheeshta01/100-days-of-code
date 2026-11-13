//Q142: Store details of 5 students in an array of structures and print all.

/*
Sample Test Cases:
Input 1:
Details of 5 students (Name, Roll, Marks)
Output 1:
Tabular list of all 5 students with their details

*/
#include <stdio.h>
struct Student
{
    char name[50];
    int roll_no;
    int marks;
};
int main()
{
    int i;
    struct Student s[5];
    for (i = 0; i < 5; i++)
    {
        printf("Enter the name of student %d:", i + 1);
        scanf("%49s", s[i].name);
        printf("Enter the roll number of student %d:", i + 1);
        scanf("%d", &s[i].roll_no);
        printf("Enter the marks of student %d:", i + 1);
        scanf("%d", &s[i].marks);
    }
    printf("%-15s %-10s %-10s\n", "Name", "Roll", "Marks");
    for (i = 0; i < 5; i++)
    {
        printf("%-15s %-10d %-10d\n", s[i].name, s[i].roll_no, s[i].marks);
    }
    return 0;
}
