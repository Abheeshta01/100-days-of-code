//Q53: Write a program to print the following pattern:
/*
*
***
*****
*******
*********
*******
*****
***
*
*/
/*
Sample Test Cases:
Input 1:

Output 1:
*
***
*****
*******
*********
*******
*****
***
*

*/
#include <stdio.h>
int main()
{
    int i, j, count;
    for (i = 1; i <= 9; i++)
    {
        if (i <= 5)
        {
            count = 2 * i - 1;
        }
        else
        {
            count = 2 * (10 - i) - 1;
        }
        for (j = 1; j <= count; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
