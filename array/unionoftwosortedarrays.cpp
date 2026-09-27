// Given two sorted arrays nums1 and nums2, return an array that contains the union of these two arrays. The elements in the union must be in ascending order.

// The union of two arrays is an array where all values are distinct and are present in either the first array, the second array, or both.

#include<iostream>
#include <vector>
#include<set>
using namespace std;

//brute force method
vector<int> unionArray(vector<int>& nums1, vector<int>& nums2){
    set<int> s1;
    for (int i = 0; i < nums1.size(); i++)
    {
        s1.insert(nums1[i]);
    }
    for (int i = 0; i < nums2.size(); i++)
    {
        s1.insert(nums2[i]);
    }
    vector<int> unionArray(s1.begin(), s1.end());
    return unionArray;    
}

//optimal approach using 2 pointers
vector<int> unionArrayOptimal(vector<int>& nums1, vector<int>& nums2){
    vector<int> unionArray;

    int i = 0, j = 0;
    while(i < nums1.size() && j < nums2.size()){
        if(nums1[i] <= nums2[j]){
            if(unionArray.size() == 0 || unionArray.back() != nums1[i]){
                unionArray.push_back(nums1[i]);
            }
            i++;
        }
        else{
            if(unionArray.size() == 0 || unionArray.back() != nums2 [j]){
                unionArray.push_back(nums2[j]);
            }
            j++;
        }
    }
    while(i < nums1.size()){
        if(unionArray.size() == 0 || unionArray.back() != nums1[i]){
            unionArray.push_back(nums1[i]);
        }
        i++;
    }
    while(j < nums2.size()){
        if(unionArray.size() == 0 || unionArray.back() != nums2[j]){
            unionArray.push_back(nums2[j]);
        }
        j++;
    }

    return unionArray; 
}