//Q81: Count characters in a string without using built-in length functions.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:
 
Output 2:
1

*/
#include <stdio.h>
int main()
{
    int i, count = 0;
    char str[100];
    printf("Enter the string:");
    fgets(str, 100, stdin);
    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++)
    {
        count++;
    }
    printf("%d\n", count);
    return 0;
}
