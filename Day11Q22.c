//Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/
#include <stdio.h>

int main()
{
    double cp, sp, percentage;
    printf("Enter Cost Price:");
    scanf("%lf", &cp);
    printf("Enter Selling Price:");
    scanf("%lf", &sp);
    if (sp > cp){
        percentage = ((sp - cp) / cp) * 100;
        printf("Profit %.1f%%\n", percentage);
    } else if (sp < cp) {
        percentage = ((cp - sp) / cp) * 100;
        printf("Loss %.1f%%\n", percentage);
    } else {
        printf("No Profit No Loss\n");
    }
    return 0;
}
