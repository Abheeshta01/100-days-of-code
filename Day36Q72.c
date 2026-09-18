//Q72: Find the sum of all elements in a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

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
            sum = sum + arr[i][j];
        }
    }
    printf("%d\n", sum);
    return 0;
}
