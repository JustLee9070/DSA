#include <iostream>
using namespace std;

//Worst case time complexity is O(n^2) and best case time complexity is O(n)
void bubble_sort(int arr [], int n){

    for (int i = n - 1; i >= 1; i--)
    {
        int didSwap = 0; 
        for (int j = 0; j <= i - 1; j++)
        {
            int temp = 0;
            if(arr[j] > arr[j + 1]){
                temp = arr [j];
                arr[j] = arr [j + 1];
                arr[j + 1] = temp;
                didSwap = 1;
            }
        }
        
        if(didSwap == 0){ //if the array is already sorted this will break the loop after it running for n times only because no swapping would be done in that case
            break;
        }

    }
    

}