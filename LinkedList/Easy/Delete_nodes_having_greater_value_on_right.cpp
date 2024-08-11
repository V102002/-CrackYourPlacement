#include<iostream>
#include<vector>
using namespace std;
struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
class Solution
{
    public:
    Node* reverseList(Node* head) {
        Node* prev = nullptr;
        Node* current = head;
        Node* next = nullptr;
    
        while (current) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        return prev;
    }
    Node *compute(Node *head)
    {
        // your code goes here
       if (!head) return nullptr;

        // Step 1: Reverse the linked list
        head = reverseList(head);
    
        // Step 2: Traverse the reversed list and remove nodes with smaller values
        Node* maxNode = head;
        Node* current = head;
    
        while (current != nullptr && current->next != nullptr) {
            if (current->next->data < maxNode->data) {
                // Remove the next node
                Node* temp = current->next;
                current->next = current->next->next;
                delete temp;
            } else {
                // Move to the next node and update maxNode
                current = current->next;
                maxNode = current;
            }
        }
    
        // Step 3: Reverse the list again to restore the original order
        head = reverseList(head);
        return head;
    }
    
};