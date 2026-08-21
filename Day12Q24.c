//Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
/*
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit

/*
Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹850

Input 3:
250
Output 3:
Bill: ₹1700

*/
#include <stdio.h>

int main()
{
    int units;
    printf("Enter units consumed:");
    scanf("%d", &units);

    int bill = 0;
    if (units > 0)
    {
        int u1 = (units < 100) ? units : 100;
        bill += u1 * 5;
    }
    if (units > 100)
    {
        int u2 = (units < 200) ? (units - 100) : 100;
        bill += u2 * 7;
    }
    if (units > 200)
    {
        int u3 = (units < 300) ? (units - 200) : 100;
        bill += u3 * 10;
    }
    if (units > 300)
    {
        int u4 = units - 300;
        bill += u4 * 12;
    }

    printf("Bill: ₹%d\n", bill);
    return 0;
}
