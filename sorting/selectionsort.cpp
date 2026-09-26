#include <iostream>
using namespace std;


//Worst case time complexity is O(n^2) and best case time complexity is O(n)
void selection_sort(int arr[], int n)
{

    for (int i = 0; i <= n - 2; i++)
    {

        int minIndex = i;
        int temp = 0;

        for (int j = i; j < n - 1; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;

    }
}



int main(){

    

}