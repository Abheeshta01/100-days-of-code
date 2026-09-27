//Q89: Count frequency of a given character in a string.

/*
Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/
#include <stdio.h>
int main()
{
    int i, count = 0;
    char str[100], ch;
    printf("Enter the string:");
    fgets(str, 100, stdin);
    printf("Enter the character:");
    scanf(" %c", &ch);
    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++)
    {
        if (str[i] == ch)
        {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}
