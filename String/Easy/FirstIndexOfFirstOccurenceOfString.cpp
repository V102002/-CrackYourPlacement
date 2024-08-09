#include <iostream>
#include <stack>
#include <string>
using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.length()==0)return 0;
        for(int i=0;i<=haystack.length();i++){
                for(int j=0;j<needle.length();j++){
                    if(haystack.substr(i,needle.length())==needle){
                        return i;
                    }
                }
        }
        return -1;
    }
};