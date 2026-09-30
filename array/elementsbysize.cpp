// You are given a 0-indexed integer array nums of even length consisting of an equal number of positive and negative integers.

// You should return the array of nums such that the array follows the given conditions:

// Every consecutive pair of integers have opposite signs.
// For all integers with the same sign, the order in which they were present in nums is preserved.
// The rearranged array begins with a positive integer.
// Return the modified array after rearranging the elements to satisfy the aforementioned conditions.

#include <iostream>
#include <vector>
using namespace std;

//bruteforce method
vector<int> rearrangeArray(vector<int>& nums){
    vector<int> positive, negative, answer;
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] > 0){
            positive.push_back(nums[i]);
        }
        else{
            negative.push_back(nums[i]);
        }
    }
    for(int i = 0; i < nums.size() / 2; i++){
        answer.push_back(positive[i]);
        answer.push_back(negative[i]);
    }
    return answer;
}

