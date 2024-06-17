#include <iostream>
#include <string>
#include <cmath> // Include the <cmath> header for ceil() function
#include<bits/stdc++.h>
using namespace std;

solve(){
	int n,mini=INT_MAX,minimum=INT_MAX;
	cin>>n;
	vector<int> a(n);
	for(auto &e:a){
		cin>>e;
	}
	for(int i=0;i<n-1;i++){
		int k=max(a[i],a[i+1]);
		if(k<mini){
			mini=k;
		}
	}
		cout<<mini-1<<"\n";
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

