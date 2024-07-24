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
    ListNode* middleNode(ListNode* head) {
        int n=0,count=0;
        ListNode* ptr=head;
        while(ptr->next!=nullptr){
            ptr=ptr->next;
            count++;
        }
        n=count;
        while(count>n/2){
            head=head->next;
            count--;
        }
        return head;
    }
};