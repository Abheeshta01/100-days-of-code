//Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

/*
Sample Test Cases:
Input 1:
s = "anagram", t = "nagaram"
Output 1:
Anagram

Input 2:
s = "rat", t = "car"
Output 2:
Not Anagram

*/
#include <stdio.h>
int main()
{
    int i, flag = 1;
    int freq[26] = {0};
    char s[100], t[100];
    printf("Enter the first string:");
    scanf("%s", s);
    printf("Enter the second string:");
    scanf("%s", t);
    for (i = 0; s[i] != '\0'; i++)
    {
        freq[s[i] - 'a']++;
    }
    for (i = 0; t[i] != '\0'; i++)
    {
        freq[t[i] - 'a']--;
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
        printf("Anagram\n");
    }
    else
    {
        printf("Not Anagram\n");
    }
    return 0;
}
