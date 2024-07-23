#include<iostream>
#include<vector>
#include<map>
using namespace std;
int findDuplicate(vector<int>& nums) {
        map<int,int> hashset;
        for(int num:nums){
            if(++hashset[num]>1){
                return num;
            }
        } 
    return 0;
}