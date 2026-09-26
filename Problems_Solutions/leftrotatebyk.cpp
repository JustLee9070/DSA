// Given an integer array nums and a non-negative integer k, rotate the array to the left by k steps.

// Example 1:
// Input: nums = [1, 2, 3, 4, 5, 6], k = 2

// Output: nums = [3, 4, 5, 6, 1, 2]

// Explanation:

// rotate 1 step to the left: [2, 3, 4, 5, 6, 1]

// rotate 2 steps to the left: [3, 4, 5, 6, 1, 2]

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

//bruteforce method
void rotateArray(vector<int>& nums, int k){
    int n = nums.size();
    k = k % n;

    vector<int> temp(k);

    for (int i = 0; i < k; i++)
    {
        temp[i] = nums[i];
    }

    for (int i = k; i < n; i++)
    {
        nums[i - k] = nums[i];  
    }

    for (int i = 0; i < k; i++)
    {
        nums[i + (n - k)] = temp [i];
    }
     
}

//optimal method
void optimalRotateArray(vector<int>& nums, int k){
    k = k % nums.size();
    reverse(nums.begin(), nums.begin() + k); //reverse is a builtin method to reverse a vector in c++ included in #include <algorithm>
    reverse(nums.begin() + k, nums.end());
    reverse(nums.begin(), nums.end());
}
