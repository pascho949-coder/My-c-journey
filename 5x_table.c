#include <stdio.h>

int main (void)
{
        int even_number[6];
        int count;

    for(int i = 0; i <= 10; i++)
    {
        int result = i * 5;

        if(result % 2 == 0)
        {
            even_number[count] = result;
            count++;
            printf("%i\n %i\n %i\n %i\n %i\n %i\n", even_number[0], even_number[1], even_number[2], even_number[3], even_number[4], even_number[5]);
        }
    }
}
