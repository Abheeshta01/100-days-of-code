//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/
#include <stdio.h>
int main()
{
    int i, m;
    char str[20];
    char months[12][4] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    printf("Enter the date (dd/mm/yyyy):");
    scanf("%s", str);
    m = (str[3] - '0') * 10 + (str[4] - '0');
    if (m < 1 || m > 12)
    {
        printf("Invalid month\n");
        return 0;
    }
    for (i = 0; i < 2; i++)
    {
        printf("%c", str[i]);
    }
    printf("-%s-", months[m - 1]);
    for (i = 6; str[i] != '\0'; i++)
    {
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}
