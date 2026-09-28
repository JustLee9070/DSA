// Given an integer n, return the number of prime numbers that are strictly less than n

#include<iostream>
#include<vector>
using namespace std;

//bruteforce method
int countPrime(int n){
    int primeCount = 0;
    for(int i = 2; i < n; i++){
        int divisors = 0;
        for(int j = 1; j * j <= i; j++){
            if(i % j == 0){
                divisors++;
                if(i / j != j){
                    divisors++;
                }
            }
        }
        if(divisors == 2){
            primeCount++;
        }
    }
    return primeCount;
}

//optimal approach, time complexity is O(nlog(log(n))) or O(n x sqrt(n))
int countPrimeOptimal(int n){
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = false;
    isPrime[1] = false;

    for(int i = 2; i * i <= n; i++){
        if(isPrime[i]){
            for(int j = i * i; j <=n; j += i){
                isPrime[j] = false;
            }
        }
    }
    int primeCount = 0;
    for(int i = 2; i <=n; i++){
        if(isPrime[i]){
            primeCount++;
        }
    }
    return primeCount;
}
