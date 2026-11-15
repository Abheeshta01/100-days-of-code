//Q144: Write a function that accepts a structure as parameter and prints its members.

/*
Sample Test Cases:
Input 1:
Student: Neha 104 92
Output 1:
Name: Neha | Roll: 104 | Marks: 92

*/
#include <stdio.h>
struct Student
{
    char name[50];
    int roll_no;
    int marks;
};
void display(struct Student s)
{
    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll_no, s.marks);
}
int main()
{
    struct Student st;
    printf("Enter the name:");
    scanf("%49s", st.name);
    printf("Enter the roll number:");
    scanf("%d", &st.roll_no);
    printf("Enter the marks:");
    scanf("%d", &st.marks);
    display(st);
    return 0;
}
