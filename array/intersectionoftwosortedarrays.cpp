// Given two sorted arrays, nums1 and nums2, return an array containing the intersection of these two arrays. Each element in the result must appear as many times as it appears in both arrays; that is, if an element appears x times in nums1 and y times in nums2, it should appear min(x, y) times in the result.

// The intersection of two arrays is an array where all values are present in both arrays.

#include<iostream>
#include<vector>
using namespace std;

//brute force method, timecomplexity in worst case is O(n x m) and spacecomplexity is O(m)
vector<int> intersectionArray(vector<int>& nums1, vector<int>& nums2){
    int n = nums1.size(), int m = nums2.size();
    vector<int> visited(m, 0), intersectionArray;
    for(int i = 0; i < n; i++){
        for (int j = 0; j < m; j++)
        {
            if(nums1[i] == nums2[j] && visited[j] == 0){
                intersectionArray.push_back(nums2[j]);
                visited[j] = 0;
                break;
            }
            if(nums2[j] > nums1[i]){
                break;
            }
        }
    }
}


//optimal method, two pointer approach, time complexity is O(n) or O(m) and spacecomplexity is O(1) but for returning the answerthe space complexity is O(n) or O(m)
vector<int> intersectionArrayOptimal(vector<int>& nums1, vector<int>& nums2){
    vector<int> intersectionArray;
    int i = 0, j = 0;
    while(i < nums1.size() && j < nums2.size()){
        if(nums1[i] < nums2[j]){
            i++;
        }
        else if(nums2[j] < nums1[i]){
            j++;
        }
        else if(nums1[i] == nums2[j]){
            intersectionArray.push_back(nums1[i]);
            i++;
            j++;
        }
    }
    return intersectionArray;
}