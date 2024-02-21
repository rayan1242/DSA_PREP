#include<bits/stdc++.h>
using namespace std;

string findS(int n,int k){
    string s="";
        for(int i=0;i<k;i++){
            s+='a'+i;
        }
        string l=s;
        reverse(l.begin(),l.end());
        while(n>1){
            s+=l;
            n--;
        }
    return s;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        cout<<findS(n,k)<<"\n";
    }
}