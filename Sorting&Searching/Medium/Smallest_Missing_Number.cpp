#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) {
    // Find the maximum value in the array
    if (n == 0) {
        return 1; // If array is empty, the smallest missing positive number is 1
    }
    
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }
    
    if (max <= 0) {
        return 1; // If all elements are non-positive, the smallest missing positive number is 1
    }
    
    // Initialize hash array
    bool* hash = new bool[max + 1]();
    
    // Increment the index corresponding to the values in the original array
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0 && arr[i] <= max) {
            hash[arr[i]] = true;
        }
    }
    
    // Find the missing number
    for (int i = 1; i <= max; i++) {
        if (!hash[i]) {
            delete[] hash; // Free the dynamically allocated memory
            return i;
        }
    }
    
    delete[] hash; // Free the dynamically allocated memory
    return max + 1;
}
};