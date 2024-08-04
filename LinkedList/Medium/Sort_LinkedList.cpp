#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
  struct ListNode {
      int val;
     ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode* sortList(ListNode* head) {
        vector<int>arr;
        if(head==nullptr||head->next==nullptr)return head;
        int i=0;
        ListNode* temp=head;
        
        while(temp){
            arr.push_back(temp->val);
            temp=temp->next;
        }
        sort(arr.begin(),arr.end());
        temp=head;
        while(temp){
            temp->val=arr[i++];
            temp=temp->next;
        }
        return head;
    }
};