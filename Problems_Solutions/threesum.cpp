// Given an integer array nums. Return all triplets such that:

// i != j, i != k, and j != k
// nums[i] + nums[j] + nums[k] == 0.
// Notice that the solution set must not contain duplicate triplets. One element can be a part of multiple triplets. The output and the triplets can be returned in any order.

#include<iostream>
#include<vector>
#include<set>
#include<algorithm>

using namespace std;

//using hashing, timpcomplexity ~O(n^2), spacecomplexity O(n) for the hash set
vector<vector<int>> threeSum(vector<int>& nums){
    set<vector<int>> sorted;
    for(int i = 0; i < nums.size(); i++){
        set<int> hash;
        for(int j = i + 1; j < nums.size(); j++){
            int required = -(nums[i] + nums[j]);
            if(hash.find(required) != hash.end()){
                vector<int> temp = {nums[i], nums[j], required};
                sort(temp.begin(), temp.end());
                sorted.insert(temp);
            }
            hash.insert(nums[j]);
        }
    }
    return vector<vector<int>>(sorted.begin(), sorted.end());
}

vector<vector<int>> threeSumOptimal(vector<int>& nums){
    sort(nums.begin(), nums.end());
    set<vector<int>> sorted;
    for(int i = 0; i < nums.size() - 1; i++){
        if(i > 0 && nums[i] == nums[i - 1]){continue;}
        int j = i + 1, k = nums.size() - 1;
        while(j < k){
            int sum = nums[i] + nums[j] + nums[k];
            if(sum > 0){
                k--;
            }
            else if(sum < 0){
                j++;
            }
            else if(sum == 0){
                vector<int> temp = {nums[i], nums[j], nums[k]};
                sorted.insert(temp);
                j++, k--;
            }
        }
    }
    return vector<vector<int>>(sorted.begin(), sorted.end());
}
