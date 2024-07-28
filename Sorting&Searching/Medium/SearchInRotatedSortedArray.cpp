#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0,high=nums.size()-1,mid;
        while(low<=high){
            mid=low+(high-low)/2;
            if(nums[mid]==target){
                return mid;
            }
             if (nums[low] <= nums[mid]) {
                // Target in the left sorted half
                if (nums[low] <= target && target < nums[mid]) {
                    high = mid - 1;
                } else { // Target in the right half
                    low = mid + 1;
                }
            }else {
                // Target in the right sorted half
                if (nums[mid] < target && target <= nums[high]) {
                    low = mid + 1;
                } else { // Target in the left half
                    high = mid - 1;
                }
            }
        }
        return -1;
    }
};