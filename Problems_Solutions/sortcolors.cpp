// You are given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

// We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

// You must solve this problem without using the library's sort function.

#include<iostream>
#include<vector>
#include<map>

using namespace std;

//timecomplexity is ~O(n) and spacecomplexity is O(1) because there are only 3 possible keys
void sortColors(vector<int>& nums){
    map<int, int> hash;
    for(int num : nums){
        hash[num]++;
    }
    for(int i = 0; i < hash[0]; i++){
        nums[i] = 0;
    }
    for(int i = hash[0]; i < hash[0] + hash[1]; i++){
        nums[i] = 1;
    }
    for(int i = hash[0] + hash[1]; i < hash[0] + hash[1] + hash[2]; i++){
        nums[i] = 2;
    }
}
