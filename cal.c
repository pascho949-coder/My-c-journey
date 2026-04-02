#include <stdio.h>

int main (void)
{
    int num = 0, sum = 0;
    char op = '\n';

    while (op != 'q')
    {
        printf("Enter num: ");
        scanf("%i", &num);
        num *= 100;
        while(getchar() != '\n');


        printf("Enter('+','-','*','/' and '%%'): ");
        scanf("%c", &op);
        while(getchar() != '\n');

        switch(op)
        {
            case '+':
                sum += num;
                break;

            case '-':
                sum -= num;
                break;

            case '*':
                sum *= num;
                break;

            case '/':
                if (num == 0)
                {
                    printf("zero division error\n");
                }
                else
                {
                    sum /= num;
                }

            case 'q':
                break;

            default:
                printf("Invalid entry\n");
        }
        printf("Total calculations = %i.%02i\n", sum / 100, sum % 100);
    }
    return 0;
}

