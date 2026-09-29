//Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/
#include <stdio.h>
int main()
{
    int i, flag = 1;
    int freq[26] = {0};
    char str1[100], str2[100];
    printf("Enter the first string:");
    scanf("%s", str1);
    printf("Enter the second string:");
    scanf("%s", str2);
    for (i = 0; str1[i] != '\0'; i++)
    {
        if (str1[i] >= 'a' && str1[i] <= 'z')
        {
            freq[str1[i] - 'a']++;
        }
    }
    for (i = 0; str2[i] != '\0'; i++)
    {
        if (str2[i] >= 'a' && str2[i] <= 'z')
        {
            freq[str2[i] - 'a']--;
        }
    }
    for (i = 0; i < 26; i++)
    {
        if (freq[i] != 0)
        {
            flag = 0;
        }
    }
    if (flag == 1)
    {
        printf("Anagrams\n");
    }
    else
    {
        printf("Not anagrams\n");
    }
    return 0;
}
