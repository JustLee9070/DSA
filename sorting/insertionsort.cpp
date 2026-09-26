#include <iostream>
using namespace std;

// worst case time complexity O(n^2) and best case time complexity is O(n)

void insertion_sort(int arr [], int n){

    for (int i = 0; i < n - 1; i++)
    {
        
        int j = i;

        while(j > 0 && arr [j - 1] > arr [j]){
            int temp = arr [j - 1];
            arr [j - 1] = arr [j];
            arr [j] = temp;
            
            j--;

        }
        
    }
    
}

