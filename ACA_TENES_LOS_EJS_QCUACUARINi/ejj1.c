#include<stdio.h>
#include<string.h>

int main()
{
    int nums[] = {1, 2, 3, 3};
    int lenght = sizeof(nums) / sizeof(nums[0]);
    int contTrue = 0;

    for (int i = 0; i < lenght-1; i++)
    {
        if (nums[i] == nums[i+1])
        {
            contTrue++;
        }
        
    }
    if (contTrue > 0)
    {
        printf("True");
    }else
    {
        printf("False");
    }
    
    return 0;
}