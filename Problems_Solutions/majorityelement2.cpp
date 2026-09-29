// Given an integer array nums of size n. Return all elements which appear more than n/3 times in the array. The output can be returned in any order.

#include <iostream>
#include <vector>
using namespace std;

//brute force method, timecomplexity O(n^2) and spacecomplexity is O(n) for the hashing array
vector<int> majorityElements(vector<int>& nums){
    int n = nums.size();
    vector<int> majorityElements;
    vector<char> hash(n, 1);
    for(int i = 0; i < n; i++){
        int count = 0;
        if(hash[i] == 1){
            for(int j = 0; j < n; j++){
                if(hash[j] == 1){
                    if(nums[i] == nums[j]){
                        count++;
                        hash[j] = 0;
                    }
                }
            }
        }
        if(count > n / 3){
            majorityElements.push_back(nums[i]);
        }
    }
    return majorityElements;
}

//optimal approach, timecomplexity O(2n) and spacecomplexity is O(1)
vector<int> majorityElementOptimal(vector<int>& nums){
    int candidate1 = 0, candidate2 = 0, count1 = 0, count2 = 0, n = nums.size();
    vector<int> majorityElements;
    for(int num : nums){
        if(num == candidate1){
            count1++;
        }
        else if(num == candidate2){
            count2++;
        }
        else if(count1 == 0){
            candidate1 = num;
            count1 = 1;
        }
        else if(count2 == 0){
            candidate2 = num;
            count2 = 1;
        }
        else{
            count1--;
            count2--;
        }
    }
    count1 = 0, count2 = 0;
    for(int num : nums){
        if(num == candidate1){
            count1++;
        }
        else if(num == candidate2){
            count2++;
        }
    }
    if(count1 > n / 3){
        majorityElements.push_back(candidate1);
    }
    if(count2 > n / 3){
        majorityElements.push_back(candidate2);
    }
    return majorityElements;
}
