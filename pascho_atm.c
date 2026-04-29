#include <stdio.h>
// ATM Stmulation

int pin_check(void); 
int main(void)
{
    int balance = 100;
    balance *= 100; 
    int amount = 0, choice = 0;

    while (choice != 4)
    {
        printf("Pascho Bank ATM\n");
        printf("Menu\n");
        printf("1 -- Check Balance\n");
        printf("2 -- Cash Deposit\n");
        printf("3 -- Cash Withdrawal\n");
        printf("4- Exit\n");

        if(scanf("%i", &choice) != 1)
        {

            printf("Invalid input\n");
            while(getchar() != '\n');
            continue;
        }
        else
        {
            while(getchar() != '\n');
        }

        switch(choice)
        {
            case 1:
                if (pin_check() == 0)
                { 
                    return 0;
                }
                printf("Balance: R%i.%02i\n", balance/100, balance%100);
                break;
            case 2:
                printf("Enter Amount: ");
                fflush(stdout);
                if(scanf("%i", &amount) != 1)
                {
                    printf("Invalid input\n");
                    while(getchar() != '\n');
                }
                else{
                    while(getchar() != '\n');
                }
                if(amount > 1)
                {
                    amount *= 100;
                    printf("Credit: R%i.%02i\n", amount/100, amount%100);
                    balance += amount;
                }
                else
                {
                    printf("Please Deposit more than R1.00");
                }
                break;
            case 3:
                printf("Enter amount: ");
                fflush(stdout);
                if(scanf("%i", &amount) != 1)
                {
                    printf("Invalid input\n");
                    while(getchar() != '\n');
                }
                else
                {
                    while(getchar() != '\n');
                }
                amount *= 100;
                if(amount < 1)
                {
                    printf("Invalid Entry\n");
                }
                else if(amount > balance)
                {
                    if (pin_check() == 0)
                    {
                        return 0;
                    }
                    printf("Insufficient Fund\n");
                }


                else{
                    if (pin_check() == 0)
                    {
                        return 0;
                    }
                    printf("Debit: %i.%02i\n", amount/100, amount%100);
                    balance -= amount;
                }
                break;
            case 4:
                printf("Thanks for your service\n");
                break;
            default:
                printf("invalid input\n");
                break;
        }

    }
    return 0;
}
int pin_check(void)
{
    const int PIN = 1234;
    int pin = 0,count;

    for(count = 3; count > 0; count --)
    {
        printf("Enter Pin: ");
        fflush(stdout);
        if (scanf("%i", &pin) != 1)
        {
            printf("Invalid input\n");
            while(getchar() != '\n');
            continue;
        }
        else
        {
            while(getchar() != '\n');
        }
        if(pin == PIN)
        {
            return 1; 
        }
        
        printf("Incorrect pin %i attempts left\n", count);

    }
    printf("Too many incorrect pin try again in the next 4hrs\n");
    return 0;
}
