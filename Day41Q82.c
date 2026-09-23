//Q82: Print each character of a string on a new line.

/*
Sample Test Cases:
Input 1:
Hi
Output 1:
H
i

*/
#include <stdio.h>
int main()
{
    int i;
    char str[100];
    printf("Enter the string:");
    fgets(str, 100, stdin);
    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++)
    {
        printf("%c\n", str[i]);
    }
    return 0;
}
