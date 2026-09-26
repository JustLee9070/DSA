// Given an integer array nums, rotate the array to the left by one.

// Note: There is no need to return anything, just modify the given array.

#include <iostream>
#include <vector>

using namespace std;

void rotateArrayByOne(vector<int>& nums){
    int temp = nums[0], n = nums.size();

    for (int i = 0; i < n; i++)
    {
        nums[i - 1] = nums[i];
    }
    
    nums[n] = temp;

}