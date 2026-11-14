//Q143: Find and print the student with the highest marks.

/*
Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)

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
    int n, i, top = 0;
    struct Student s[100];
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
    for (i = 1; i < n; i++)
    {
        if (s[i].marks > s[top].marks)
        {
            top = i;
        }
    }
    printf("Topper: %s (Marks: %d)\n", s[top].name, s[top].marks);
    return 0;
}
