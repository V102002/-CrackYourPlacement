#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
class Solution{
    public:
        int climbStairs(int n){
            if(n==1){
                return 1;
            }
            if(n==2){
                return 2;
            }
            int first=1,second=2;//Fibonacci Logic
            for(int i=2;i<n;i++){
                int next=first+second;
                first=second;
                second=next;
            }
            return second;
        }
};