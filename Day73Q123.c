//Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.

/*
Sample Test Cases:
Input 1:
File: sample.txt (Content: Hello world\nThis is C programming)
Output 1:
Characters: 31
Words: 5
Lines: 2

*/
#include <stdio.h>
int main()
{
    int ch, last = 0, chars = 0, words = 0, lines = 0, inWord = 0;
    FILE *fp;
    fp = fopen("info.txt", "r");
    if (fp == NULL)
    {
        printf("Error: could not open the file\n");
        return 0;
    }
    while ((ch = fgetc(fp)) != EOF)
    {
        if (ch == '\n')
        {
            lines++;
        }
        else
        {
            chars++;
        }
        if (ch == ' ' || ch == '\n' || ch == '\t')
        {
            inWord = 0;
        }
        else if (inWord == 0)
        {
            inWord = 1;
            words++;
        }
        last = ch;
    }
    if (last != 0 && last != '\n')
    {
        lines++;
    }
    fclose(fp);
    printf("Characters: %d\n", chars);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);
    return 0;
}
