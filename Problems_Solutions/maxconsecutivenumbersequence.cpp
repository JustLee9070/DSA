// Given an array nums of n integers.

// Return the length of the longest sequence of consecutive integers. The integers in this sequence can appear in any order.
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std; 

//time complexity is O(n x log(n)) and spacecomplexity is O(1)
int longestConsecutive(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    int count = 0, maxCount = -1;
    if (nums.size() == 1)
    {
        return 1;
    }
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i - 1] == nums[i] - 1)
        {
            count++;
        }
        else if (nums[i - 1] != nums[i])
        {
            count = 0;
        }
        if (count > maxCount)
        {
            maxCount = count;
        }
    }
    return (maxCount + 1);
}