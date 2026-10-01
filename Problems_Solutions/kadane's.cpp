// Given an integer array nums, find the subarray with the largest sum and return the sum of the elements present in that subarray.

// A subarray is a contiguous non-empty sequence of elements within an array.

#include<iostream>
#include<vector>
using namespace std;

//time complexity of this algo is O(n) and spacecomplexity is O(1)
int maxSubArray(vector<int>& nums){
    int sum = 0, maxSum = INT_MIN;
    for(int i = 0; i < nums.size(); i++){
        sum += nums[i];
        if(sum > maxSum){
            maxSum = sum;
        }
        if(sum < 0){
            sum = 0;
        }
    }
    return maxSum;
}
