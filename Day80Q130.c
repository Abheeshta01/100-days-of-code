//Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

/*
Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92

*/
#include <stdio.h>
int main()
{
    int n, i, roll, marks;
    char name[50];
    FILE *fp;
    printf("Enter the number of students:");
    scanf("%d", &n);
    fp = fopen("students.txt", "w");
    if (fp == NULL)
    {
        printf("Error: could not create the file\n");
        return 0;
    }
    for (i = 0; i < n; i++)
    {
        printf("Enter the name of student %d:", i + 1);
        scanf("%49s", name);
        printf("Enter the roll number of student %d:", i + 1);
        scanf("%d", &roll);
        printf("Enter the marks of student %d:", i + 1);
        scanf("%d", &marks);
        fprintf(fp, "%s %d %d\n", name, roll, marks);
    }
    fclose(fp);
    fp = fopen("students.txt", "r");
    if (fp == NULL)
    {
        printf("Error: could not open the file\n");
        return 0;
    }
    while (fscanf(fp, "%49s %d %d", name, &roll, &marks) == 3)
    {
        printf("Name: %s | Roll: %d | Marks: %d\n", name, roll, marks);
    }
    fclose(fp);
    return 0;
}
