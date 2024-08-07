#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
class Solution {
  public:
    void rearrangeEvenOdd(Node *head) {
        // Your Code here
        Node* temp=head;
        vector<int>ans;
        vector<int>num;
        while(temp){
            num.push_back(temp->data);
            temp=temp->next;
        }
        for(int i=0;i<num.size();i+=2){
            ans.push_back(num[i]);
        }
        for(int i=1;i<num.size();i+=2){
            ans.push_back(num[i]);
        }
        temp=head;
        for(int i=0;i<ans.size();i++){
            temp->data=ans[i];
            temp=temp->next;
        }
    }
};