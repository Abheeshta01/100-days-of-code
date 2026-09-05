//Q54: Write a program to print the following pattern:
/*
   *
  ***
 *****
*******
 *****
  ***
   *
*/

/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with layers of stars as shown.

*/
#include <stdio.h>
int main()
{
    int i, j, k;
    for (i = 1; i <= 7; i++)
    {
        if (i <= 4)
        {
            k = i;
        }
        else
        {
            k = 8 - i;
        }
        for (j = 1; j <= 4 - k; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= 2 * k - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
