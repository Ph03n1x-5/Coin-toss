#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int flip();   // declare function flip

int main()
{
    // declare the variables 
    int coin, counter, tails = 0, heads = 0;
    printf("\nA program that simulates Coin Tossing...\n");
    srand(time(NULL));
    for(counter = 1; counter <= 100; counter++)     // loop for counter upto 100
    {
        coin = flip();          // function call
        if(coin == 0)          // if coin is 0 then print Tails
        {
            printf("Tails\t");
            tails = tails + 1;
        }
        else if(coin == 1)
        {
        printf("Heads\t");
        heads = heads + 1;
        }
        if(counter%10==0)
        {
            printf("\n");
        }
    }
    // Total Counts of Heads and Tails
    printf("\n");
    printf("Heads was tossed %d times\n", heads);
    printf("Tails was tossed %d times\n", tails);
    
}

// implementing flip function
//Approximately 50 Heads and 50 Tails
int flip()
{
    return rand() % 2;
    getch();
    
}
