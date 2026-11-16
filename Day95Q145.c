//Q145: Return a structure containing top student's details from a function.

/*
Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96

*/
#include <stdio.h>
struct Student
{
    char name[50];
    int roll_no;
    int marks;
};
struct Student findTop(struct Student s[], int n)
{
    int i, top = 0;
    for (i = 1; i < n; i++)
    {
        if (s[i].marks > s[top].marks)
        {
            top = i;
        }
    }
    return s[top];
}
int main()
{
    int n, i;
    struct Student s[100], t;
    printf("Enter the number of students:");
    scanf("%d", &n);
    if (n <= 0 || n > 100)
    {
        printf("Invalid number of students\n");
        return 0;
    }
    for (i = 0; i < n; i++)
    {
        printf("Enter the name of student %d:", i + 1);
        scanf("%49s", s[i].name);
        printf("Enter the roll number of student %d:", i + 1);
        scanf("%d", &s[i].roll_no);
        printf("Enter the marks of student %d:", i + 1);
        scanf("%d", &s[i].marks);
    }
    t = findTop(s, n);
    printf("Top Student: %s | Roll: %d | Marks: %d\n", t.name, t.roll_no, t.marks);
    return 0;
}
