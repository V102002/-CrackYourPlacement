#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int max=0;
        int left=0,right=height.size()-1;
        while(left<right){
            int currheight=min(height[left],height[right]);
            int width=right-left;
            int area=currheight*width;
            (area>max)?max=area:max!=area;
            (height[left]>height[right])?right--:left++;
        }
        return max;
    }
};