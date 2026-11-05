//Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

/*
Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed

*/
#include <stdio.h>
enum status {SUCCESS, FAILURE, TIMEOUT};
int main()
{
    int choice;
    enum status s;
    printf("Enter the status (0 for SUCCESS, 1 for FAILURE, 2 for TIMEOUT):");
    scanf("%d", &choice);
    if (choice < SUCCESS || choice > TIMEOUT)
    {
        printf("Invalid status\n");
        return 0;
    }
    s = (enum status)choice;
    switch (s)
    {
        case SUCCESS:
            printf("Operation successful\n");
            break;
        case FAILURE:
            printf("Operation failed\n");
            break;
        case TIMEOUT:
            printf("Operation timed out\n");
            break;
    }
    return 0;
}
