#include <stdio.h>
#include <string.h>

int add(int a, int b)
{
    // Returns the sum of the two integers (I think this is obvious)
    return a + b;
}

int main() {
    /** // Sample Code
    char name[] = "Wiz";
    printf("Hello %s\n", name);
    int user_a;
    scanf("%d", &user_a);
    // Displays the sum of the input & 10
    printf("%d + 10 equals %d\n", user_a, add(user_a, 10));
    // If the sum of the input & 10 is greater than 50
    if (add(user_a, 10) > 50)
    {
        // Tell the user that they made a huge number
        printf("That's a big number!!\n");
    }
    */

    // Pronoun input
    char pronouns[30];
    printf("Enter your preferred pronouns, then hit ENTER: ");
    scanf("%s", &pronouns);
    printf("Your pronouns are %s", pronouns);
    if (strcmp(pronouns, "he/him") == 0)
    {
        printf("... Basic bitch...");
    }
    printf("\n\n");
    return 0;
}