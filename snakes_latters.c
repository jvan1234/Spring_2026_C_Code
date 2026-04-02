#include <stdio.h>
#include <stdlib.h>
#include <time.h> // used to make seed

int roll_die(int min, int max)
{
    return rand() % (max - min + 1) + min; // Thank you https://www.geeksforgeeks.org/c/generating-random-number-range-c/ !~
}

int main()
{
    srand(time(NULL));
    
    int counter = 1;
    int space = 1;
    do
    {
        printf("Turn %d:\n", counter);
        int roll = roll_die(1,6);
        if (space + roll <= 100)
            space += roll;
        printf("Rolled a %d, trying space #%d\n", roll, space);
        switch (space)
        {
            case 3:
                space=22;
                break;
            case 5:
                space=8;
                break;
            case 11:
                space=26;
                break;
            case 17:
                space=4;
                break;
            case 19:
                space=7;
                break;
            case 20:
                space=29;
                break;
            case 21:
                space=9;
                break;
            case 27:
                space=56;
                break;
            case 36:
                space=44;
                break;
            case 43:
                space=34;
                break;
            case 51:
                space=67;
                break;
            case 54:
                space=31;
                break;
            case 62:
                space=18;
                break;
            case 64:
                space=60;
                break;
            case 71:
                space=92;
                break;
            case 80:
                space=99;
                break;
            case 87:
                space=24;
                break;
            case 93:
                space=73;
                break;
            case 95:
                space=75;
                break;
            case 98:
                space=79;
                break;
        }
        
        printf("On space #%d\n", space);
        printf("---------\n");
        counter += 1;
    } while (space != 100);
    printf("Took %d turns!", counter);
    return 0;
}
