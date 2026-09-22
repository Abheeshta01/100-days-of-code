//Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/
#include <stdio.h>
int main()
{
    int r, c, i, j, s;
    int arr[100][100];
    printf("Enter the number of rows and columns:");
    scanf("%d %d", &r, &c);
    printf("Enter the elements:");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (s = 0; s <= r + c - 2; s++)
    {
        if (s % 2 == 1)
        {
            for (i = 0; i < r; i++)
            {
                j = s - i;
                if (j >= 0 && j < c)
                {
                    printf("%d ", arr[i][j]);
                }
            }
        }
        else
        {
            for (i = r - 1; i >= 0; i--)
            {
                j = s - i;
                if (j >= 0 && j < c)
                {
                    printf("%d ", arr[i][j]);
                }
            }
        }
    }
    printf("\n");
    return 0;
}
