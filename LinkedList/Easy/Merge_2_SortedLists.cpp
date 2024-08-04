#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
 
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
 
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* last;
        ListNode* third;
        if (list1 == nullptr) return list2;
        if (list2 == nullptr) return list1;
        if(list1->val<list2->val){
            third=list1;
            last=list1;
            list1=list1->next;
            last->next=nullptr;
        }else{
            third=list2;
            last=list2;
            list2=list2->next;
            last->next=nullptr;
        }
        while(list1!=nullptr && list2!=nullptr){
            if(list1->val<list2->val){
                last->next=list1;
                last=list1;
                list1=list1->next;
                last->next=nullptr;
            }else{
                last->next=list2;
                last=list2;
                list2=list2->next;
                last->next=nullptr;
            }
        }
        if(list1!=nullptr){
            last->next=list1;
        }else{
            last->next=list2;
        }
        return third;
    }
};