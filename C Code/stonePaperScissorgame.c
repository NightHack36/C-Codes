#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    int n = 0, m = 0;
    for (int i = 0; i < 3; i++)
    {
        int a; //user
        printf("Enter 0 For STONE 1 For PAPER 2 For SCESSOR\n");
        scanf("%d", &a);
        srand(time(NULL));
        int b = rand() % 3; //computer
        if (a == 1 && b == 0)
        {
            n++;
            printf("You won computer chooses stone\n");
        }
        else if (a == 2 && b == 1)
        {
            n++;
            printf("You won computer chooses paper\n");
        }
        else if (a == 0 && b == 2)
        {
            n++;
            printf("You won computer chooses scissor\n");
        }
        else if (a == 0 && b == 0)
        {
            n = n;
            printf("TIE computer chooses stone\n");
        }
        else if (a == 1 && b == 1)
        {
            n = n;
            printf("TIE computer chooses paper\n");
        }
        else if (a == 2 && b == 2)
        {
            n = n;
            printf("TIE computer chooses scissor\n");
        }
        else if (a == 0 && b == 1)
        {
            m++;
            printf("Computer won computer chooses Paper\n");
        }
        else if (a == 1 && b == 2)
        {
            m++;
            printf("Computer won computer chooses Scissor\n");
        }
        else if (a == 2 && b == 0)
        {
            m++;
            printf("Computer won computer chooses Stone\n");
        }
    }

    printf("\n\n");
    if (n == m)
    {
        printf("YOUR SCORE %d COMPUTER SCORE %d\n", n, m);
        printf("Match Is TIE\n");
    }
    else if (n > m)
    {
        printf("YOUR SCORE %d COMPUTER SCORE %d\n", n, m);
        printf("YOU WON THE Match\n");
    }
    else if (m > n)
    {
        printf("YOUR SCORE %d COMPUTER SCORE %d\n", n, m);
        printf("YOU LOST THE Match\n");
    }
}
