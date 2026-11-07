//Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

/*
Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/
#include <stdio.h>
enum menu {ADD = 1, SUBTRACT, MULTIPLY};
int main()
{
    int choice, a, b;
    enum menu op;
    printf("Enter the choice (1 for ADD, 2 for SUBTRACT, 3 for MULTIPLY):");
    scanf("%d", &choice);
    if (choice < ADD || choice > MULTIPLY)
    {
        printf("Invalid choice\n");
        return 0;
    }
    printf("Enter two numbers:");
    scanf("%d %d", &a, &b);
    op = (enum menu)choice;
    switch (op)
    {
        case ADD:
            printf("%d\n", a + b);
            break;
        case SUBTRACT:
            printf("%d\n", a - b);
            break;
        case MULTIPLY:
            printf("%d\n", a * b);
            break;
    }
    return 0;
}
