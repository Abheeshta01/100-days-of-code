//Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include <stdio.h>
int main()
{
    int i, j, start = 0;
    char str[100];
    printf("Enter the sentence:");
    fgets(str, 100, stdin);
    for (i = 0; ; i++)
    {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\0')
        {
            for (j = i - 1; j >= start; j--)
            {
                printf("%c", str[j]);
            }
            if (str[i] == '\n' || str[i] == '\0')
            {
                break;
            }
            printf(" ");
            start = i + 1;
        }
    }
    printf("\n");
    return 0;
}
