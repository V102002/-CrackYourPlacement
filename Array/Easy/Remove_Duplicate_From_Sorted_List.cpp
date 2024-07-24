#include<iostream>
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
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == nullptr) return nullptr;
        ListNode* ptr=head;
        while(ptr!=nullptr){
            while(ptr->next!=nullptr && ptr->val==ptr->next->val){
                ptr->next=ptr->next->next;
            }
            ptr=ptr->next;
        }
        return head;
    }
};