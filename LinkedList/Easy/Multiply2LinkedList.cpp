#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
  struct Node {
      int data;
      Node *next;
      Node() : data(0), next(nullptr) {}
      Node(int x) : data(x), next(nullptr) {}
      Node(int x, Node *next) : data(x), next(next) {}
  };
  class solution {
  public:
    long long multiplyTwoLists(Node *first, Node *second) {
        long long int num1 = 0, num2 = 0;
        long long int mod = 1000000007;
        Node *p1 = first, *p2 = second;
    
        // Form the number from the first linked list
        while (p1 != NULL) {
            num1 = (num1 * 10 + p1->data) % mod;
            p1 = p1->next;
        }
    
        // Form the number from the second linked list
        while (p2 != NULL) {
            num2 = (num2 * 10 + p2->data) % mod;
            p2 = p2->next;
        }
    
        // Multiply the two numbers and return the result modulo 1000000007
        return (num1 * num2) % mod;
    }

};