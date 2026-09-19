//Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/
#include <stdio.h>
int main()
{
    int r, c, i, j;
    int arr[100][100], rowSum[100];
    printf("Enter the number of rows and columns:");
    scanf("%d %d", &r, &c);
    printf("Enter the elements:");
    for (i = 0; i < r; i++)
    {
        rowSum[i] = 0;
        for (j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
            rowSum[i] = rowSum[i] + arr[i][j];
        }
    }
    for (i = 0; i < r; i++)
    {
        printf("%d ", rowSum[i]);
    }
    printf("\n");
    return 0;
}
