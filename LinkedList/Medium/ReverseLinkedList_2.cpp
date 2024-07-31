#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

 struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution{
    public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(!head||left==right) return head;
        vector<int> values;
        ListNode* current=head;
        for(int i=1;i<left;i++){
            current=current->next;
        }
        ListNode* temp=current;
        for(int i=left;i<=right;i++){
            values.push_back(temp->val);
            temp=temp->next;
        }
        reverse(values.begin(),values.end());
        temp=current;
        for(int val : values){
            temp->val=val;
            temp=temp->next;
        }
        return head;
    }
};