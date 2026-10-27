//Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

/*
Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.

*/
#include <stdio.h>
int main()
{
    char text[100];
    FILE *fp;
    printf("Enter the text to append:");
    fgets(text, 100, stdin);
    fp = fopen("data.txt", "a");
    if (fp == NULL)
    {
        printf("Error: could not open the file\n");
        return 0;
    }
    fprintf(fp, "%s", text);
    fclose(fp);
    printf("File updated successfully with appended text.\n");
    return 0;
}
