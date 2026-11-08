//Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

/*
Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!

*/
#include <stdio.h>
enum role {ADMIN, USER, GUEST};
int main()
{
    int choice;
    enum role r;
    printf("Enter the role (0 for ADMIN, 1 for USER, 2 for GUEST):");
    scanf("%d", &choice);
    if (choice < ADMIN || choice > GUEST)
    {
        printf("Invalid role\n");
        return 0;
    }
    r = (enum role)choice;
    switch (r)
    {
        case ADMIN:
            printf("Welcome Admin!\n");
            break;
        case USER:
            printf("Welcome User!\n");
            break;
        case GUEST:
            printf("Welcome Guest!\n");
            break;
    }
    return 0;
}
