#include<iostream>
#include<vector>
using namespace std;


   struct ListNode {
       int val;
       ListNode  *next;
       ListNode() : val(0), next(nullptr) {}
       ListNode(int x) : val(x), next(nullptr) {}
       ListNode(int x, ListNode  *next) : val(x), next(next) {}
   };
 
class Solution {
public:
    ListNode* sortList(ListNode* head) {
        //initialize the count array with 0 to count the number of 0s,1s,2s
        int count[3] = {0, 0, 0};
        
        // Traverse the linked list and count occurrences of 0s, 1s, and 2s
        ListNode* current = head;
        while (current != nullptr) {
            count[current->val]++;
            current = current->next;
        }
        
        // Make the list again but sorted
        current = head;
        for (int i = 0; i < 3; i++) {
            while (count[i] > 0) {
                current->val = i;
                current = current->next;
                count[i]--;
            }
        }
        
        return head;
    }
};
