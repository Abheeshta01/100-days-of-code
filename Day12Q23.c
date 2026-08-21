//Q23: Write a program to calculate library fine based on late days as follows: 
/*
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.

/*
Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹22

Input 3:
15
Output 3:
Fine ₹60

Input 4:
31
Output 4:
Membership Cancelled

*/
#include <stdio.h>

int main()
{
    int days;
    printf("Enter Days Delayed:");
    scanf("%d", &days);

    if (days > 30)
    {
        printf("Membership Cancelled\n");
    } else
    {
        int fine = 0;
        if (days > 0)
        {
            int d1 = (days < 5) ? days : 5;
            fine += d1 * 2;
        }
        if (days > 5)
        {
            int d2 = (days < 10) ? (days - 5) : 5;
            fine += d2 * 4;
        }
        if (days > 10)
        {
            int d3 = (days < 30) ? (days - 10) : 20;
            fine += d3 * 6;
        }
        printf("Fine ₹%d\n", fine);
    }
    return 0;
}
