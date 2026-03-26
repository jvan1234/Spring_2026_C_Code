#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int gen_random(int min, int max)
{
    return rand() % (max - min + 1) + min; // Thank you https://www.geeksforgeeks.org/c/generating-random-number-range-c/ !~
}

void guessNumber(int num)
{
    printf("The number generated was: ");
    switch (num)
    {
        case 1:
            printf("1");
            break;
        case 2:
            printf("2");
            break;
        case 3:
            printf("3");
            break;
        case 4:
            printf("4");
            break;
        case 5:
            printf("5");
            break;
        case 6:
            printf("6");
            break;
        default:
            printf("ERR! (out of range)");
            break;
    }
}

int main()
{
    // Sets a seed according to the time
    srand(time(NULL));
    guessNumber(gen_random(1,6));

    return 0;
}
