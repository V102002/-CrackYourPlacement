#include<iostream>
#include<vector>
using namespace std;
int maxProfit(vector<int>& prices) {
        int buy=prices[0];
        int max=0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]<buy){
                buy=prices[i];
            }else if(prices[i]-buy>max){
                max=prices[i]-buy;
            }
        }
    return max;
}
int main(){
    vector<int>prices={7,1,5,3,6,4};
    cout<<maxProfit(prices);
}