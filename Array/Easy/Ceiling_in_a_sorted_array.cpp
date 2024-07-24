#include<iostream>
#include<vector>
using namespace std;
int ceilSearch(int arr[],int low,int high,int x){
    int i;
    if(x<=arr[low]){
        return low;
    }
    for (int i = low; i < high; i++)
    {
        if (arr[i]==x)
        {
            return i;
        }
        if(arr[i]<x &&arr[i+1]>=x){
            return i+1;
        }
        
    }
    
}
