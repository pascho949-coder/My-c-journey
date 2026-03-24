#include <stdio.h>

int main (void)
{
        int even_number[6] = {0};
        int count = 0;

    for(int i = 1; i <= 10; i++)
    {
        int result = i * 5;

        if(result % 2 == 0)
        {
            even_number[count] = result;
            count++;
        }
    }
    for(int i = 0; i < count; i++)
    {  
        printf("%i\n", even_number[i]);
    }
    return 0;
}
