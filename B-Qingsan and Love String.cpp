#include <iostream>
#include <string>
#include <cmath> // Include the <cmath> header for ceil() function
#include<bits/stdc++.h>
using namespace std;


void solve(){
	int n,m,cnt=1;
	cin>>n>>m;
	string s,t;
	cin>>s;
	cin>>t;
	for(int i=1;i<s.size();i++){
		if(s[i-1]==s[i]){
			break;
		}
		cnt++;
	}
	if(cnt==s.size()){
		cout<<"YES"<<"\n";
	}else{
		int f=1;
		for(int i=1;i<t.size();i++){
			if(t[i-1]==t[i]){
				cout<<"NO"<<"\n";
				f=0;
			}
		}
		if(f){
			int flag=1;
				char t1=t[0];
				char t2=t[n-1];
				for(int i=1;i<s.size();i++){
					if(s[i-1]==s[i] && (s[i-1]==t1 || s[i]==t2)){
						cout<<"NO"<<"\n";
						flag=0;
					} 
				}
			if(flag){
				cout<<"YES"<<"\n";
			}			
		}
	}
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    
    while (T--) {
        solve();
    }
    
    return 0;
}

