//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/
#include <stdio.h>
int main()
{
    int i, j, k, len = 0, maxLen = 0, flag;
    char str[100];
    printf("Enter the string:");
    fgets(str, 100, stdin);
    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++)
    {
        len++;
    }
    for (i = 0; i < len; i++)
    {
        for (j = i; j < len; j++)
        {
            flag = 1;
            for (k = i; k < j; k++)
            {
                if (str[k] == str[j])
                {
                    flag = 0;
                    break;
                }
            }
            if (flag == 0)
            {
                break;
            }
            if (j - i + 1 > maxLen)
            {
                maxLen = j - i + 1;
            }
        }
    }
    printf("%d\n", maxLen);
    return 0;
}
