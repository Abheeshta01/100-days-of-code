//Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include <stdio.h>
int main()
{
    int n, digit, i, maxDigit = 0;
    int count[10] = {0};
    printf("Enter the number:");
    scanf("%d", &n);
    do
    {
        digit = n % 10;
        count[digit]++;
        n /= 10;
    } while (n > 0);
    for (i = 1; i <= 9; i++)
    {
        if (count[i] > count[maxDigit])
        {
            maxDigit = i;
        }
    }
    printf("%d\n", maxDigit);
    return 0;
}
