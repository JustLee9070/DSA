// Given an integer array of size n containing distinct values in the range from 0 to n (inclusive), return the only number missing from the array within this range.



#include<iostream>
#include<vector>
using namespace std;

//brute force method, in this timecomplexity is O(n^2) because we are iterating the n values of array for n times to compare
int missingNumber(vector<int>& nums){
    for(int i = 0; i <= nums.size(); i++){
        int occurance = 0;
        for(int j = 0; j < nums.size(); j++){
            if(i == nums[j]){
                occurance++;
            }
        }
        if(occurance == 0){
            return i;
        }
    }
    return -1;
}

//hashing method, in this timecomplexity will be reduced to 2O(n) but the spacecomplexity will become O(n) because of the hashing array we created
int missingNumberHashing(vector<int>& nums){
    int n = nums.size();
    vector<int> hash(n + 1, 0);
    for(int i = 0; i < n; i++){
        hash[nums[i]] = 1;
    }
    for(int i = 0; i < hash.size(); i++){
        if(hash[i] == 0){
            return i;
        }
    }
    return -1;
}

//most optimal method, in this timecomplexity will be reduced to O(n) and the spacecomplexity will be O(1), we will use the sum of n numbers to determine the missing number
int missingNumberOptimal(vector<int>& nums){
    int n = nums.size(), sumIdeal = n * (n + 1) / 2, sumArray = 0;
    for(int i = 0; i < n; i++){
        sumArray += nums[i];
    }
    return(sumIdeal - sumArray);
}