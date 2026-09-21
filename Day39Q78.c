//Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/
#include <stdio.h>
int main()
{
    int r, c, i, j, sum = 0;
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
    if (r != c)
    {
        printf("Not a square matrix\n");
        return 0;
    }
    for (i = 0; i < r; i++)
    {
        sum = sum + arr[i][i];
    }
    printf("%d\n", sum);
    return 0;
}
