//Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/
#include <stdio.h>
int main()
{
    int i, j, k, len1 = 0, len2 = 0, flag = 0;
    char str1[100], str2[100];
    printf("Enter the first string:");
    scanf("%s", str1);
    printf("Enter the second string:");
    scanf("%s", str2);
    for (i = 0; str1[i] != '\0'; i++)
    {
        len1++;
    }
    for (i = 0; str2[i] != '\0'; i++)
    {
        len2++;
    }
    if (len1 == len2)
    {
        for (i = 0; i < len1; i++)
        {
            k = i;
            for (j = 0; j < len2; j++)
            {
                if (str1[k] != str2[j])
                {
                    break;
                }
                k = (k + 1) % len1;
            }
            if (j == len2)
            {
                flag = 1;
                break;
            }
        }
    }
    if (flag == 1)
    {
        printf("Rotation\n");
    }
    else
    {
        printf("Not rotation\n");
    }
    return 0;
}
