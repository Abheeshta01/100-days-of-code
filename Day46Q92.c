//Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/
#include <stdio.h>
int main()
{
    int i, found = 0;
    int freq[26] = {0};
    char str[100];
    printf("Enter the string:");
    fgets(str, 100, stdin);
    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            freq[str[i] - 'a']++;
        }
    }
    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z' && freq[str[i] - 'a'] > 1)
        {
            printf("%c\n", str[i]);
            found = 1;
            break;
        }
    }
    if (found == 0)
    {
        printf("No repeating character\n");
    }
    return 0;
}
