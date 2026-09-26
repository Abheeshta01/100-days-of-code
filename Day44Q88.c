//Q88: Replace spaces with hyphens in a string.

/*
Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world

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
        if (str[i] == ' ')
        {
            str[i] = '-';
        }
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}
