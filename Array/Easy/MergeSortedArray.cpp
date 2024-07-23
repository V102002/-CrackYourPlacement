#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int *num3=new int[m+n];
        int i=0,j=0,k=0;
        while(i<m &&j<n){
            if(nums1[i]<nums2[j]){
                num3[k++]=nums1[i++];
            }else{
                num3[k++]=nums2[j++];
            }
        }
        //Copy the remaining elements from nums1
        while(i<m){
            num3[k++]=nums1[i++];
        }
        //Copy the remaining elements from nums2
        while(j<n){
            num3[k++]=nums2[j++];
        }
        //Copy elements from num3 to nums1
        for(int i=0;i<m+n;i++){
            nums1[i]=num3[i];
        }
        delete []num3;
    }