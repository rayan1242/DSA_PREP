#include<bits/stdc++.h>
using namespace std;


vector<int> merge_two_sorted_array(vector<int>& arr1,vector<int>&arr2){
    vector<int> result;
    int k=0,i=0,j=0;
    int n = arr1.size();
    int m = arr2.size();
    while(i<n && j<m){
        if (arr1[i]<arr2[j])
            result.push_back(arr1[i++]);        
        else if(arr1[i]>arr2[j])
            result.push_back(arr2[j++]);
    }
    while(j<m){
            result.push_back(arr2[j++]);
        }

    while(i<n){
            result.push_back(arr1[i++]);
        }
    return result;
}


void merge(vector<int>& arr,int l ,int mid,int r){
    vector<int> left;
    vector<int> right;
    int k=0;
    for(int i=l;i<mid;i++){
        left[k++]=arr[i];
    }
    int s=0;
    for(int i=mid+1;i<r;i++){
        right[s++]=arr[i];
    }
    vector<int> result=merge_two_sorted_array(left,right);
    int n=0;
    for(int i=0;i<arr.size();i++){
        arr[i]=result[n++];
    }

}


void f(vector<int>& arr,int l ,int r){
    int mid=(l+r)/2;
    f(arr,l,mid);
    f(arr,mid+1,r);
    merge(arr,l,mid,r);
}

void merge_sort(vector<int>& arr,int l,int r){
    f(arr,l,r);
}

int main(){
    vector<int> arr = {4,2,7,11,2,-3,6,8,0,2};
    int l=0,r=arr.size();
    merge_sort(arr,l,r);
}