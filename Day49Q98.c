//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>
int main()
{
    int i, len = 0, lastStart = 0;
    char str[100];
    printf("Enter the name:");
    fgets(str, 100, stdin);
    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++)
    {
        len++;
    }
    for (i = len - 1; i >= 0; i--)
    {
        if (str[i] == ' ')
        {
            lastStart = i + 1;
            break;
        }
    }
    for (i = 0; i < lastStart; i++)
    {
        if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
        {
            printf("%c.", str[i]);
        }
    }
    printf(" ");
    for (i = lastStart; i < len; i++)
    {
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}
