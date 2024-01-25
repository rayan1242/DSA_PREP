#include<bits/stdc++.h>
using namespace std;

void merge_two_sorted_array(vector<int>& arr1,vector<int>&arr2,vector<int>& merged_arr){
    int k=0,i=0,j=0;
    int n = arr1.size();
    int m = arr2.size();
    while(i<n && j<m){
        if (arr1[i]<arr2[j])
			merged_arr.push_back(arr1[i++]);        
		else if(arr1[i]>arr2[j])
            merged_arr.push_back(arr2[j++]);
    }
    while(j<m){
            merged_arr.push_back(arr2[j++]);
        }

    while(i<n){
            merged_arr.push_back(arr1[i++]);
        }
}


int main(){
    vector<int> arr1 = {-1,1,2,3,};
    vector<int> arr2 = {4,5,8};
    vector<int> merged_arr;
    merge_two_sorted_array(arr1,arr2,merged_arr);
    for(int i=0;i<merged_arr.size();i++){
        cout<<merged_arr[i]<<" ";
    }

}
