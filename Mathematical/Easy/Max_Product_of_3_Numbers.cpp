#include<iostream>
#include<algorithm>
#include<vector>
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int maxProduct=0;
        if(nums.size()==3){
            maxProduct=nums[0]*nums[1]*nums[2];
        }else if(nums.size()<3){
            return 0;
        }else{
            int n=nums.size();
            maxProduct=max(nums[n-1]*nums[n-2]*nums[n-3],nums[0]*nums[1]*nums[n-1]);
        }
        return maxProduct;
    }
};