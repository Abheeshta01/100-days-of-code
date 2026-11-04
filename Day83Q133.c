//Q133: Create an enum for months and print how many days each month has.

/*
Sample Test Cases:
Input 1:
FEB
Output 1:
28 or 29 days

*/
#include <stdio.h>
enum month {JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC};
int main()
{
    int choice;
    enum month m;
    printf("Enter the month number (1 for JAN, 2 for FEB, ... 12 for DEC):");
    scanf("%d", &choice);
    if (choice < JAN || choice > DEC)
    {
        printf("Invalid month\n");
        return 0;
    }
    m = (enum month)choice;
    switch (m)
    {
        case FEB:
            printf("28 or 29 days\n");
            break;
        case APR:
        case JUN:
        case SEP:
        case NOV:
            printf("30 days\n");
            break;
        default:
            printf("31 days\n");
            break;
    }
    return 0;
}
