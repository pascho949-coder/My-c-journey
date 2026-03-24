#include <stdio.h>

int main ()
{
    int multiple = 1;

    for(int i = 1; i <= 10; i++)
    {
        multiple = i * 5;

        if(multiple % 2 == 0)
        {
            printf("Even numbers: %i\n", multiple);
        }
             if(multiple % 2 != 0)
             {
                 printf("Odd numbers: %i\n", multiple);
             }
    }
}
