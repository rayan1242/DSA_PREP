#include<bits/stdc++.h>
using namespace std;

int getPairs(int k,vector<int> nums){
        int i=0,j=nums.size(),count=0;
        while(i<=j){
            if(i*j<k){
                    count+=2*(j-i+1)-1;
                    i++;
            }
            else{
                j--;
            }
        }
        return count;
}