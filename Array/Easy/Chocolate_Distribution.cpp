#include <iostream>
#include <vector>
#include <algorithm>
#include<climits>
using namespace std;

class Solution {
public:
    // Function to heapify a subtree rooted with node i, which is an index in arr[]
    void heapify(vector<long long>& arr, int n, int i) {
        int largest = i; // Initialize largest as root
        int left = 2 * i + 1; // left child
        int right = 2 * i + 2; // right child

        // If left child is larger than root
        if (left < n && arr[left] > arr[largest])
            largest = left;

        // If right child is larger than largest so far
        if (right < n && arr[right] > arr[largest])
            largest = right;

        // If largest is not root
        if (largest != i) {
            swap(arr[i], arr[largest]); // Swap root with the largest child

            // Recursively heapify the affected sub-tree
            heapify(arr, n, largest);
        }
    }

    // Main function to perform heap sort
    void heapSort(vector<long long>& arr, int n) {
        // Build heap (rearrange array)
        for (int i = n / 2 - 1; i >= 0; i--)
            heapify(arr, n, i);

        // One by one extract elements from heap
        for (int i = n - 1; i > 0; i--) {
            // Move current root to end
            swap(arr[0], arr[i]);

            // Call max heapify on the reduced heap
            heapify(arr, i, 0);
        }
    }
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
        long long minDifference=LLONG_MAX;
        heapSort(a,n);
        for(long long i=0;i+m-1<n;i++){
            long long difference=a[i+m-1]-a[i];
            if(difference<minDifference){
                minDifference=difference;
            }
        }
        return minDifference;
    }  
};