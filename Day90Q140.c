//Q140: Define a struct with enum Gender and print person's gender.

/*
Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

*/
#include <stdio.h>
enum Gender {MALE, FEMALE, OTHER};
struct Person
{
    char name[50];
    enum Gender gender;
};
int main()
{
    int choice;
    struct Person p;
    printf("Enter the name:");
    scanf("%49s", p.name);
    printf("Enter the gender (0 for MALE, 1 for FEMALE, 2 for OTHER):");
    scanf("%d", &choice);
    if (choice < MALE || choice > OTHER)
    {
        printf("Invalid gender\n");
        return 0;
    }
    p.gender = (enum Gender)choice;
    switch (p.gender)
    {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        case OTHER:
            printf("Other\n");
            break;
    }
    return 0;
}
