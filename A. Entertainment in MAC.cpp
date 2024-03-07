#include<bits/stdc++.h>
using namespace std;

void solve(string s,int n){
    if(s[0]>s[s.size()-1]){
        string k=s;
        reverse(k.begin(),k.end());
        k+=s;
        cout<<k<<endl;
        return;
    }else{
        int i=0,j=s.size()-1;
        while(i<j && s[i]==s[j]){
            i++;
            j--; // corrected typo here
        }
        if(s[i]>s[j]){
            string k=s;
            reverse(k.begin(),k.end());
            k+=s;
            cout<<k<<endl;
            return;
        }
    }
    cout<<s<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        solve(s,n);
    }
}

