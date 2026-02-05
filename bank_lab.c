#include <stdio.h>

int main()
{
    double bal = 1000;
    printf("##########\n#  BANK  #\n##########\n");
    printf("(1) Deposit\n(2) Withdraw\n(3) Check Balance\n(4) Quit\n[#] > ");
    int answer;
    scanf("%d", &answer);
    
    double cash;
    switch (answer)
    {
        case 1:
            // Deposits money into the account
            printf("Enter the money being deposited into the account: $");
            scanf("%lf", &cash);
            bal = bal + cash;
            printf("New Account Balance: $%.2lf", bal);
            break;
        case 2:
            // Withdraws money from the account
            printf("Enter the money being withdrawn from the account: $");
            scanf("%lf", &cash);
            bal = bal - cash;
            printf("New Account Balance: $%.2lf", bal);
            break;
        case 3:
            // Show the account Balance
            printf("Current Balance: $%.2lf\n", bal);
            break;
        default:
            printf("See you next time!\n");
    }
}
