#include <stdio.h>

int main(void)
{
    int nums[6] = {22,14,66,31,21,12};
    
    //minimum number
    int mim = nums[0];
    //total (adding all the numbers of the array)
    int total = 0;
    float average = 0;

    //looping for the minimum number and total
    for(int i = 0; i < 6; i++)
    {
        total += nums[i];
        average = (float)total / 6;  
        //checking for least number
        if (nums[i] < mim)
        {
            mim = nums[i];
        }
    }

    //display the output
    printf("Average = %f\n", average);
    printf("total = %i\n", total);
    printf("least number = %i\n", mim);
}
