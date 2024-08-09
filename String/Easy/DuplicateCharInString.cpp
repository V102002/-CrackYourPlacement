#include <iostream>
#include <stack>
#include <string>
using namespace std;
class Solution{
    public:
    int sameChar(string A, string B)
    {
        // code here 
        int count=0;
        for(int i=0;i<A.length();i++){
            if(tolower(A.at(i))==tolower(B.at(i))){
                count++;
            }
        }
        return count;
    }
};