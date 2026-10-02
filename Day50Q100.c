//Q100: Print all sub-strings of a string.

/*
Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

*/
#include <stdio.h>
int main()
{
    int i, j, k, len = 0;
    char str[100];
    printf("Enter the string:");
    scanf("%s", str);
    for (i = 0; str[i] != '\0'; i++)
    {
        len++;
    }
    for (i = 0; i < len; i++)
    {
        for (j = i; j < len; j++)
        {
            for (k = i; k <= j; k++)
            {
                printf("%c", str[k]);
            }
            if (!(i == len - 1 && j == len - 1))
            {
                printf(",");
            }
        }
    }
    printf("\n");
    return 0;
}
