// Given two sorted arrays, nums1 and nums2, return an array containing the intersection of these two arrays. Each element in the result must appear as many times as it appears in both arrays; that is, if an element appears x times in nums1 and y times in nums2, it should appear min(x, y) times in the result.

// The intersection of two arrays is an array where all values are present in both arrays.

#include<iostream>
#include<vector>
using namespace std;

//brute force method
vector<int> intersectionArray(vector<int>& nums1, vector<int>& nums2){
    int n = nums1.size(), int m = nums2.size();
    int vis[] = {0};
}