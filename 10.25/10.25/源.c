#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void rotate(int* nums, int numsSize, int k)
{
    int a = k % numsSize;
    int turn = numsSize - a;
    int left = 0;
    int righ = turn - 1;
    while (left <= righ)
    {
        int temp = nums[left];
        nums[left] = nums[righ];
        nums[righ] = temp;
        left++;
        righ--;
    }
    left = turn;
    righ = numsSize - 1;
    while (left <= righ)
    {
        int temp = nums[left];
        nums[left] = nums[righ];
        nums[righ] = temp;
        left++;
        righ--;
    }
    left = 0;
    righ = numsSize - 1;
    while (left <= righ)
    {
        int temp = nums[left];
        nums[left] = nums[righ];
        nums[righ] = temp;
        left++;
        righ--;
    }



}
int missingNumber(int* nums, int numsSize)
{
    int max = 0;
    int flag = 0;
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] > max)max = nums[i];
        if (nums[i] == 0)flag = 1;
    }
    int a = 0;
    for (int i = 0; i <= max; i++)a ^= i;
    for (int i = 0; i < numsSize; i++)
    {
        a ^= nums[i];
    }

    if (a == 0 && flag == 1)
    {
        return max + 1;
    }
    return a;
}
int main()
{
	return 0;
}