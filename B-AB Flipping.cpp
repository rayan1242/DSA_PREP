#include <iostream>
#include <string>
#include <cmath> // Include the <cmath> header for ceil() function
#include<bits/stdc++.h>
using namespace std;
 
void solve(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	int i=0,j=n-1,cntA=0,cntB=0,totalA=0;
	while(s[i]!='A') i++;
	while(s[j]!='B') j--;
	for(int k=j;k>=i;k--){
		k--;
		while(s[k]=='B' && k>=0){
			spareB++;
			k--;
		}
		while(s[k]=='A' && k>=0) {
		cntA++;
		k--;
		}
		
	}
	cout<<totalA+cntB<<"\n";	
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

