#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;
class Solution{
    public:
        vector<long long int> productExceptSelf(vector<long long int>& nums) {
        // code here
        vector<long long int>P={};
        for(int i=0;i<nums.size();i++){
            long long int product=1;
            for(int j=0;j<nums.size();j++){
                if(j != i){ // Compare indices instead of values
                    product *= nums[j];
                }
            }
            P.push_back(product);
        }
        return P;
    }

};