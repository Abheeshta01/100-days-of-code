//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/
#include <stdio.h>
#include <math.h>

int main()
{
    double principal, rate, time;
    double simpleinterest, compoundinterest;
    printf("Enter the Principal:");
    scanf("%lf", &principal);
    printf("Enter the Rate:");
    scanf("%lf", &rate);
    printf("Enter the Time");
    scanf("%lf", &time);
    simpleinterest = (principal * rate * time) / 100;
    compoundinterest = principal * pow(1 + rate / 100, time) - principal;
    printf("Simple Interest = %.2f\n", simpleinterest);
    printf("Compound Interest = %.2f\n", compoundinterest);
    return 0;
}
