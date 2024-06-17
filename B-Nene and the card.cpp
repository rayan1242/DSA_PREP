#include <iostream>
#include <string>
#include <cmath> // Include the <cmath> header for ceil() function
#include<bits/stdc++.h>
using namespace std;


void solve(){
	unordered_map<int,int> um;
	int n,cnt=0;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
		um[a[i]]++;
	}
	for(auto &it:um){
		if(it.second==2) cnt++;
	}
	cout<<cnt<<"\n";
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

