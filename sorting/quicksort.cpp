#include <iostream>
#include <vector>

using namespace std;

//time complexity of this algorithm is O(n x log(n)) in best case and O(n^2) in worst case where we choose smallest or largest number as the pivot

int partitionFinder(vector<int> &nums, int low, int high){

    int pivot = nums[low];
    int i = low, j = high;

    while(i < j){

        while(nums[i] <= pivot && i <= high - 1){
            i++;
        }
        while(nums[j] > pivot && j >= low + 1){
            j--;
        }

        if(i < j){

            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;

        }

    }

    nums[low] = nums[j];
    nums[j] = pivot;

    return j;

}

vector<int> qs(vector<int> &nums, int low, int high){

    if(low < high){

        int partitionIndex = partitionFinder(nums, low, high);
        qs(nums, low, partitionIndex - 1);
        qs(nums, partitionIndex + 1, high);

    }

    return nums;

}

vector<int> quick_sort(vector<int> &nums){

    int low = 0, high = nums.size() - 1;

    return qs(nums, low, high);

}
