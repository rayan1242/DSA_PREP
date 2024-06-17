#include <iostream>
#include <string>
#include <cmath> // Include the <cmath> header for ceil() function
#include<bits/stdc++.h>
using namespace std;

solve(){
	
	string s;
	cin>>s;
	if(s[0]==s[s.size()-1]){
		cout<<s<<"\n";
	}else{
		s[s.size()-1]=s[0];
		cout<<s<<"\n";
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

