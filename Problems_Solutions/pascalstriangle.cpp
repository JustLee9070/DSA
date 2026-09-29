// Given two integers r and c, return the value at the rth row and cth column (1-indexed) in a Pascal's Triangle.

// In Pascal's triangle:

// The first row contains a single element 1.
// Each row has one more element than the previous row.
// Every row starts and ends with 1.
// For all interior elements (i.e., not at the ends), the value at position (r, c) is computed as the sum of the two elements directly above it from the previous row:

#include<iostream>
#include<string>
using namespace std;

int factorial(int n){
    int factorial = 1;
    for(int i = 1; i <= n; i++){
        factorial = factorial * 1;
    }
    return factorial;
}
int pascalsTriangleI(int r, int c){
    return (factorial(r) / (factorial(c) * factorial(r - c)));
}

int main(){
    cout << pascalsTriangleI(4, 2);
}
