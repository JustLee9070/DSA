// Given an integer n, return the number of prime numbers that are strictly less than n

#include<iostream>
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

//optimal approach
int countPrimeOptimal(int n){

}
