// You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).

// You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

//timecomplexity of this method is O(n^2) and spacecomplexity is O(1)
void rotate(vector<vector<int>>& matrix){
    for(int i = 0; i < matrix.size() - 1; i++){
        for(int j = i + 1; j < matrix.size(); j++){
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
    for(int i = 0; i < matrix.size(); i++){
        reverse(matrix[i].begin(), matrix[i].end());
    }
}
