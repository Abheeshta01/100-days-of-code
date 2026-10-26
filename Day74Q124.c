//Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

/*
Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/
#include <stdio.h>
int main()
{
    int ch;
    char src[50], dest[50];
    FILE *fs, *fd;
    printf("Enter the source file name:");
    scanf("%s", src);
    printf("Enter the destination file name:");
    scanf("%s", dest);
    fs = fopen(src, "r");
    if (fs == NULL)
    {
        printf("Error: could not open the source file\n");
        return 0;
    }
    fd = fopen(dest, "w");
    if (fd == NULL)
    {
        printf("Error: could not create the destination file\n");
        fclose(fs);
        return 0;
    }
    while ((ch = fgetc(fs)) != EOF)
    {
        fputc(ch, fd);
    }
    fclose(fs);
    fclose(fd);
    printf("File copied successfully to %s\n", dest);
    return 0;
}
