// Given a binary array nums, return the maximum number of consecutive 1's in the array

#include <iostream>
#include <vector>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums){

    int n = nums.size(), repetition = 0, maxRepetition = 0;

    for (int i = 0; i < n; i++)
    {
        if(nums[i] == 1){
            repetition++;
            if (repetition >= maxRepetition)
            {
                maxRepetition = repetition;
            }
        }

        if(nums[i] != 1){
            repetition = 0;
        }   
    }
    
    return maxRepetition;

}