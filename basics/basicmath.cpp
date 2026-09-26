#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int countdigits(int n){
    int count = 0;
    while(n>0){
        n = n/10;
        count++;
    }
    return count;
}

int reverseNumber(int n){
    int revnum = 0;
    while(n>0){
        int lastdigit;
        lastdigit = n%10;
        n = n/10;
        revnum = (revnum*10)+lastdigit;
    }
    return revnum;
}

bool isPalindrome(int n){
    int revnum = 0;
    int orgnum = n;
    while(n>0){
        int lastdigit;
        lastdigit = n%10;
        n = n/10;
        revnum = (revnum*10)+lastdigit;
    }
    if (revnum == orgnum)
    {
        return true;
    }
    else
    {
        return false;
    } 
}

bool isArmstrong(int n){
    int orgnum = n;
    int cubesum = 0;
    while(n > 0){
        int lastdigit;
        lastdigit = n%10;
        cubesum = cubesum + (lastdigit*lastdigit*lastdigit);
        n = n/10;
    }
    if (cubesum == orgnum)
    {
        return true;
    }
    else
    {
        return false;
    }
}

vector<int> divisors(int n){
    vector<int> d;

    for (int i = 1; i*i <= n; i++)
    {
        if (n%i == 0)
        {
            d.emplace_back(i);
            if (n/i != i)
            {
                d.emplace_back(n/i);
            }
            
        }   
    }
    return d;
}

bool isPrime(int n){
    int count = 0;
    for (int i = 1; i*i <= n; i++)
    {
        if (n%i == 0 )
        {
            if (n/i != i)
            {
                count = count + 2;
            }

            else
            {
                count++;
            }    
        }    
    }
    if (count == 2)
    {
        return true;
    }
    else return false;
}

int GCD(int n1, int n2){
    int GCD = 0;
    for (int i = min(n1, n2); i > 0; i--)
    {
        if (n1%i == 0 && n2%i == 0)
        {
            GCD = i;
            break;
        }
        
    }
    return GCD;
}

int main(){
    cout << reverseNumber(-1234) << endl;
}
