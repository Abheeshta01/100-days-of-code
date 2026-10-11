//Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

/*
Sample Test Cases:
Input 1:
arr[100, 200, 300, 400] = , k = 2
Output 1:
700

Input 2:
arr[1, 4, 2, 10, 23, 3, 1, 0, 20] = , k = 4
Output 2:
39

Input 3:
arr[100, 200, 300, 400] = , k = 1
Output 3:
400

*/
#include <stdio.h>
int main()
{
    int n, k, i, j, sum, max;
    int arr[100];
    printf("Enter the number of elements:");
    scanf("%d", &n);
    printf("Enter the elements:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the value of k:");
    scanf("%d", &k);
    if (k > n || k <= 0)
    {
        printf("-1\n");
        return 0;
    }
    max = 0;
    for (i = 0; i < k; i++)
    {
        max = max + arr[i];
    }
    for (i = 1; i <= n - k; i++)
    {
        sum = 0;
        for (j = i; j < i + k; j++)
        {
            sum = sum + arr[j];
        }
        if (sum > max)
        {
            max = sum;
        }
    }
    printf("%d\n", max);
    return 0;
}
