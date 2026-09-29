//Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include <stdio.h>
int main()
{
    int i, len = 0, maxLen = 0, start = 0, maxStart = 0;
    char str[100];
    printf("Enter the sentence:");
    fgets(str, 100, stdin);
    for (i = 0; ; i++)
    {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\0')
        {
            if (len > maxLen)
            {
                maxLen = len;
                maxStart = start;
            }
            len = 0;
            start = i + 1;
            if (str[i] == '\n' || str[i] == '\0')
            {
                break;
            }
        }
        else
        {
            len++;
        }
    }
    for (i = maxStart; i < maxStart + maxLen; i++)
    {
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}
