//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>
int main()
{
    int n, first, last, temp, mult = 1, result;
    printf("Enter the number:");
    scanf("%d", &n);
    last = n % 10;
    temp = n;
    while (temp >= 10)
    {
        temp /= 10;
        mult *= 10;
    }
    first = temp;
    result = last * mult + (n % mult) - last + first;
    printf("%d\n", result);
    return 0;
}
