// Given an array of integers nums and an integer target, find the smallest index (0 based indexing) where the target appears in the array. If the target is not found in the array, return -1

#include<iostream>
#include<vector>

using namespace std;

int linearSearch(vector<int>& nums, int target){
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        if(nums[i] == target){
            return i;
        }
    }
    return -1;
}

