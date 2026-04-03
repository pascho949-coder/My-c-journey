#include <stdio.h>

int main(void)
{
    int nums[5] = {40,12,33,98,70};
    int max = nums[0];

    //here looping starts with one.. 
    //for we are checking for the other index.. 
    //greater than index 0.
    for(int i = 1; i < 5; i++)
    {
        if(nums[i] > max)
        {
            //assigning the greater value to max
            max = nums[i];
        }
    }
    printf("Max = %i\n", max);
    return 0;
}
