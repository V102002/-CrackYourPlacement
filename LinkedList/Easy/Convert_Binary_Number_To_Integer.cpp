#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
struct ListNode
{
    int val;
    ListNode* next;
    
    ListNode(int x){
        val = x;
        next = NULL;
    }
};
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        vector<int>arr;
        int binary=0;
        ListNode* current=head;
        while(current){
            arr.push_back(current->val);
            current=current->next;
        }
        int n=arr.size();
        for(int i=0;i<arr.size();i++){
            binary=binary+(arr[i]*pow(2,arr.size()-i));
        }
        return binary/2;
    }
};