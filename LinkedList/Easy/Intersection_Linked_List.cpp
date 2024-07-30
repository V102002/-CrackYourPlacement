
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(nullptr) {}
  };
 
class Solution {
public:
    int getLength(ListNode* temp){
        int count=0;
        while(temp!=nullptr){
            count++;
            temp=temp->next;
        }
        return count;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int l1=getLength(headA);
        int l2=getLength(headB);
        int diff;

        if(l1>l2){
            diff=l1-l2;
            while(diff>0){
                headA=headA->next;
                diff--;
            }
        }else{
            diff=l2-l1;
            while(diff>0){
                headB=headB->next;
                diff--;
            }
        }
        while(headA!=nullptr && headB!=nullptr){
            if(headA==headB){
                return headA;
            }
            headA=headA->next;
            headB=headB->next;
        }
        return nullptr;
    }
};