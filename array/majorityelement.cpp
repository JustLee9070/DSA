// Given an integer array nums of size n, return the majority element of the array.

// The majority element of an array is an element that appears more than n/2 times in the array. The array is guaranteed to have a majority element.

#include <iostream>
#include <vector>
using namespace std;

// brute force method, time complexity O(n^2)
int majorityElement(vector<int>& nums)
{
    int repetition = 0, maxRepetition = 0, maxRepetitionIndex = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i; j < nums.size(); j++)
        {
            if (nums[i] == nums[j])
            {
                repetition++;
                if (repetition >= maxRepetition)
                {
                    maxRepetition = repetition;
                    maxRepetitionIndex = i;
                }
            }
        }
        repetition = 0;
        if (maxRepetition >= (nums.size() + 1) / 2)
        {
            break;
        }
    }
    return nums[maxRepetitionIndex];
}

int majorityElementOptimal(vector<int> &nums){
    int repetition = 0, maxRepetition;

    for(int i = 0; i < nums.size(); i++){
        if(repetition == 0){
            maxRepetition = nums[i];
        }
        if(nums[i] != maxRepetition){
            repetition--;
        }
        else{
            repetition++;
        }
    }
}