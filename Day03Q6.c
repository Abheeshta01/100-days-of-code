//Q6: Write a program to swap two numbers using a third variable.

/*
Sample Test Cases:
Input 1:
3 5
Output 1:
After swap: 5 3

Input 2:
-1 1
Output 2:
After swap: 1 -1

*/
#include <stdio.h>
int main(void)
{
    int a, b;
    printf("Enter the first number:");
    scanf("%d", &a);
    printf("Enter the second number:");
    scanf("%d", &b);
    int temp = a;
    a = b;
    b = temp;
    printf("After swap the first number is:%d\n", a);
    printf("After swap the second number is:%d\n", b);
    return 0;
}
