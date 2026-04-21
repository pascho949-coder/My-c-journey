#include <stdio.h>

int main(void)
{
    int pin = 0, count = 0, status = 0;

    //Trying to make a loop for the password
    while(count < 5)
    {
        printf("Enter password: ");
        fflush(stdout);
        scanf("%i", &pin);

        if (pin == 1234)
        {
            printf("Correct password access granted\n");
            status += 1;
            break;
        }
        else
        {
            printf("Invalid password try again\n");
            count++;
        }
    }

    if (status == 0)
    {
        printf("You have exceeded the password limit\n");
    }
    return 0;
}
