#include <iostream>
#include <algorithm>

using namespace std;

void printName(string name, int n, int count = 0){
    if (count < n)
    {
        cout<<name<<endl;
    }
    count++;
    printName(name, n, count);
}

void printNumbers(int n, int count = 1){
    if (count <= n)
    {
        cout<<count<<endl;
    }
    count++;
    printNumbers(n, count);
}

void revprintNumbers(int n){
    
    if (n > 0)
    {
        cout << n << endl;        
        revprintNumbers(n - 1);
    }

}

int NumbersSum(int N){
    
    if (N == 0)
    {
        return 0;
    }
    return N + NumbersSum(N - 1);  
}

void reverse(int arr[], int n, int count = 0){

    if(count >= n - 1){return;}
    int temp = arr[count];
    arr[count] = arr[n - 1];
    arr[n - 1] = temp;
    count++;
    n--;
    reverse(arr, n, count);
}

void printArray(int arr[], int n){
    for (int i = 0; i < n - 1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

string reverseString(string s){
    char temp;

    for (int i = 0; i < s.length(); i++)
    {
        if (i >= s.length() - 1 - i)
        {
            break;
        }
        
        temp = s[i];
        s[i] = s[s.length() - 1 - i];
        s[s.length() - 1 - i] = temp;   
    }

    return s;

}

string recrevString(string s, int count = 0, int last = -1){

    if(last == -1){
        last = s.length() - 1;
    }

    if(count >= last){
        return s;
    }

    char temp = s[count];
    s[count] = s[last];
    s[last] = temp;
    count++, last--;

    return recrevString(s, count, last);

}

bool palindromeCheck(string& s, int left = 0, int right = -1){

    if(right == -1){right = s.length() - 1;}
    
    if(left >= right){return true;}

    if(tolower(s[left]) != tolower(s[right])){return false;}

    return palindromeCheck(s, left + 1, right - 1);

}

int main(){
    string s1 = "water";
    cout << palindromeCheck(s1) << endl;
    return 0;
}