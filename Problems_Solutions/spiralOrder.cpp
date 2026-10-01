// Given an m x n matrix, return all elements of the matrix in spiral order.
// Example 1:
// Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
// Output: [1,2,3,6,9,8,7,4,5]

#include<iostream>
#include<vector>

using namespace std;

// timecomplexity in this case would be O(m x n) ~ O(n^2) & space complexity to return the answer is O(m x n) ~ O(n^2)
vector<int> spiralOrder(vector<vector<int>>& matrix){
    int m = matrix.size(), n = matrix[0].size(), left = 0, right = n - 1, top = 0, bottom = m - 1;
    vector<int> spiralOrder;
    while(top <= bottom && left <= right){
        for(int i = left; i <= right; i++){
            spiralOrder.push_back(matrix[top][i]);
        }
        top++;
        for(int i = top; i <= bottom; i++){
            spiralOrder.push_back(matrix[i][right]);
        }
        right--;
        if(top <= bottom){
            for(int i = right; i >= left; i--){
                spiralOrder.push_back(matrix[bottom][i]);
            }
            bottom--;
        }
        if(left <= right){
            for(int i = bottom; i >= top; i--){
                spiralOrder.push_back(matrix[i][left]);
            }
            left++;
        }
    }
    return spiralOrder;
}
