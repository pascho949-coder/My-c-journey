#include <stdio.h>
int main ()
{
    int height = 0;
    printf("enter height: ");
    scanf("%i", &height);
    
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j <= height - i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < i; k++)
        {
            printf("#");
	    }
        printf(" ");
        
        for (int k = 0; k < i; k++)
        {
            printf("#");
        }

	printf("\n");
    }
    return 0;
}
