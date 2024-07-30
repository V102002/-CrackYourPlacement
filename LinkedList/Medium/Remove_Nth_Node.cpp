#include<iostream>
#include<algorithm>
#include<vector>


  struct ListNode {
      int val;
     ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
int length(ListNode* temp){
    int count=0;
    while(temp){
        count++;
        temp=temp->next;
    }
    return count;
}
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int l=length(head);
        int diff=l-n;
        if(diff==0){
            head=head->next;
            return head;
        }
        ListNode* current=head;
        for(int i=1;i<diff;i++){
            current=current->next;
        }
        current->next=current->next->next;
        return head;
    }
};