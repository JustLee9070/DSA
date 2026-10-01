// You are given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

#include<iostream>
#include<vector>
#include<map>
using namespace std;

//brute force, timecomplexity is ~ O(n^2), spacecomplexity will be O(1)
vector<int> twoSum(vector<int>& nums, int target){
    vector<int> solution;
    for(int i = 0; i < nums.size(); i++){
        for(int j = i + 1; j < nums.size(); j++){
            if(nums[i] + nums[j] == target){
                solution.push_back(i);
                solution.push_back(j);
                break;
            }
        }
    }
    return solution;
}

//using hash map, timecomplexity is ~ O(n), but there will also be a spacecomplexity of O(n)
vector<int> twoSumHash(vector<int>& nums, int target){
    map<int, int> hash;
    vector<int> solution;
    for(int i = 0; i < nums.size(); i++){
        int required = target - nums[i];
        if(hash.find(required) != hash.end()){
            solution.push_back(hash[required]);
            solution.push_back(i);
            break;
        }
        hash[nums[i]] = i;
    }
    return solution;
}
