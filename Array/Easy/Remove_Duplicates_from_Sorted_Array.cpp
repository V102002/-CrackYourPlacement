#include <vector>
#include <iostream>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int indexWrite=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]){
                nums[indexWrite]=nums[i];
                indexWrite++;
            }
        }
        return indexWrite;
    }
};