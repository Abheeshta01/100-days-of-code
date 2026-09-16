//Q68: Delete an element from an array.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/
#include <stdio.h>
int main()
{
    int n, i, pos;
    int arr[100];
    printf("Enter the number of elements:");
    scanf("%d", &n);
    printf("Enter the elements:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the position to delete:");
    scanf("%d", &pos);
    if (pos < 0 || pos >= n)
    {
        printf("Invalid position\n");
        return 0;
    }
    for (i = pos; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
