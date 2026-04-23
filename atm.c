#include <stdio.h>

// stimulating an ATM :
int main (void)
{
    int balance = 100; // Variable for the balance
    balance *= 100; // am multipling 100 here to balance to change it to ceents
    int user_choice = 0, amount_depo = 0, amount =0;
    while(1) //This is the infinite loop for the program to always  repeatt
    {
    
        // This is the menu for the atm
        printf("1. Check balance\n");
        printf("2. Cash Deposit\n");
        printf("3. Cash Withdrawal\n");
        printf("4. Exit\n");
        
        // Am prompting the user to chose according to the options abpve
        scanf("%i", &user_choice);
        while (getchar() != '\n'); //getchar is the janior that clears the buffer
        
        // I used a switch statement here because we a dealing with fixed values(1,2,3,4)
        switch(user_choice)
        {
            /**his first case is for the balance so when the user types 1 from the input above
             it Enters the case 1 of the switch statement same as case 2 and so on depending on 
             the valid input**/

            case 1:
                printf("Balance: R%i.%02i\n", balance / 100,balance % 100);//This displays the current balance
                break;
            case 2:
                printf("Enter Amount: ");
                fflush(stdout);
                scanf("%i", &amount_depo);
                while(getchar() != '\n');
                amount_depo *= 100;
                
                if(amount_depo > 1)
                {
                    printf("Deposit: R%i.%02i\n", amount_depo / 100, amount_depo % 100);

                    balance += amount_depo;
                    printf("Balance: R%i.%02i\n", balance / 100, balance % 100);
                }
                else {
                    printf("Amount is less than R1.00, please deposit R2 and Above\n");
                }
                break;
            case 3:
                printf("Enter Amount: ");
                fflush(stdout);
                scanf("%i", &amount);
                while(getchar() != '\n');
                amount *= 100;

                if(amount > 1)
                {
                    if (balance < amount)
                    {
                        printf("insuffient fund\n");
                    }
                    else{
    
                        printf("Debit: R%i.%02i\n", amount / 100, amount % 100);

                        balance -= amount;
                        printf("Balance: R%i.%02i\n", balance / 100, balance % 100);
                    }
                }
               else {
                    printf("Amount is less than R1.00\n ");
                }
                break;
            case 4:
                printf("Balance: %i.%02i\n", balance / 100, balance % 100);
                return 0;

            default:
                printf("Invaild Entry pls try again\n");
        }
    }
}
