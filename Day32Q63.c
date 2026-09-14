//Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/
#include <stdio.h>
int main()
{
    int n1, n2, i, k = 0;
    int a[100], b[100], merged[200];
    printf("Enter the size of first array:");
    scanf("%d", &n1);
    printf("Enter the elements of first array:");
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the size of second array:");
    scanf("%d", &n2);
    printf("Enter the elements of second array:");
    for (i = 0; i < n2; i++)
    {
        scanf("%d", &b[i]);
    }
    for (i = 0; i < n1; i++)
    {
        merged[k++] = a[i];
    }
    for (i = 0; i < n2; i++)
    {
        merged[k++] = b[i];
    }
    for (i = 0; i < k; i++)
    {
        printf("%d ", merged[i]);
    }
    printf("\n");
    return 0;
}
