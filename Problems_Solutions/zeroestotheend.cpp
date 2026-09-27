// Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

// Note that you must do this in-place without making a copy of the array

#include<iostream>
#include<vector>

using namespace std;

void moveZeroes(vector<int>& nums){
    int n = nums.size(), j = -1;

    for (int i = 0; i < n; i++)
    {
        if(nums[i] == 0){
            j = i;
            break;
        }
    }

    if(j == -1){return;}

    for(int i = j + 1; i < n; i++){
        if(nums[i] != 0){
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;

            j++;
        }
    }
}