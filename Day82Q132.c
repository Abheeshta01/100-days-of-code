//Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

/*
Sample Test Cases:
Input 1:
GREEN
Output 1:
Go

*/
#include <stdio.h>
enum light {RED, YELLOW, GREEN};
int main()
{
    int choice;
    enum light signal;
    printf("Enter the signal (0 for RED, 1 for YELLOW, 2 for GREEN):");
    scanf("%d", &choice);
    if (choice < RED || choice > GREEN)
    {
        printf("Invalid signal\n");
        return 0;
    }
    signal = (enum light)choice;
    switch (signal)
    {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
    }
    return 0;
}
