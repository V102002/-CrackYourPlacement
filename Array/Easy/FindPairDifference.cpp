#include<iostream>
#include<vector>
using namespace std;
class Solution {
  public:
  #include<vector>
  void heapify(vector<int>& arr, int n, int i) {
        int largest = i;
        int left = 2 * i + 1;
        int right = 2 * i + 2;

        if (left < n && arr[left] > arr[largest])
            largest = left;

        if (right < n && arr[right] > arr[largest])
            largest = right;

        if (largest != i) {
            swap(arr[i], arr[largest]);
            heapify(arr, n, largest);
        }
    }

    // Function to perform heap sort
    void heapsort(vector<int>& arr) {
        int n = arr.size();

        // Build a max heap
        for (int i = n / 2 - 1; i >= 0; i--)
            heapify(arr, n, i);

        // Extract elements from the heap one by one
        for (int i = n - 1; i >= 0; i--) {
            swap(arr[0], arr[i]);
            heapify(arr, i, 0);
        }
    }

    // Function to find a pair with a given difference
    int findPair(int n, int x, vector<int>& arr) {
        heapsort(arr); // Sort the array using heap sort

        int i = 0, j = 1;
        while (j < n) {
            int diff = arr[j] - arr[i];
            if (diff == x) {
                return 1; // Found a pair
            } else if (diff < x) {
                j++; // Increase the difference
            } else {
                i++; // Decrease the difference
                if (i == j) {
                    j++; // Ensure j is always ahead of i
                }
            }
        }
        return -1; // No pair found
    }
};