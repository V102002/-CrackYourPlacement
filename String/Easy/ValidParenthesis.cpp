#include <iostream>
#include <stack>
#include <string>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        stack<char> Stack;
        for(int i=0;i<s.length();i++){
            char c=s[i];
            if(c=='{' || c=='[' || c=='('){
                Stack.push(c);
            }else if(Stack.empty()){
                return false;
            }else if(Stack.top()=='(' &&c==')'){
                Stack.pop();
            }else if(Stack.top()=='{' &&c=='}'){
                Stack.pop();
            }else if(Stack.top()=='[' &&c==']'){
                Stack.pop();
            }else{
                return false;
            }
        }
        return Stack.empty();
    }
};