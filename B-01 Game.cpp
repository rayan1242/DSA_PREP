#include <iostream>
#include <string>
#include <cmath> // Include the <cmath> header for ceil() function
#include<bits/stdc++.h>
using namespace std;

solve(){
	int cnt0=0,cnt1=0;
	string s;
	cin>>s;
	vector<int> a;
	for(char &c:s){
		if(c=='0')
			cnt0++;
		else
			cnt1++;
	}
	int m=min(cnt1,cnt0);
	if(m%2==0){
		cout<<"NET"<<"\n";
	}else{
		cout<<"DA"<<"\n";
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

