// You are given an integer n. You need to check if the number is a perfect number or not. Return true if it is a perfect number, otherwise, return false.

// A perfect number is a number whose proper divisors (excluding the number itself) add up to the number itself.

#include<iostream>
#include<vector>
#include<set>

using namespace std;

bool isPerfect(int n){
    int sum = 0;
    for(int i = 1; i * i <= n; i++){
        if(n % i == 0){
            sum += i;
            if(n / i != i){
                sum += n / i;
            }
        }
    }
    if(sum == 2 * n){return true;}
    else{return false;}
}
