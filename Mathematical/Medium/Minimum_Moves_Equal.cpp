#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;
class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int middle=(nums.size()-1)/2;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(i==middle)continue;
            if(nums[i]<nums[middle]){
                int diff=nums[middle]-nums[i];
                count+=diff;
            }
            if(nums[i]>nums[middle]){ 
                int diff=nums[i]-nums[middle];
                count+=diff;
            }
        }
        return count;
    }
};