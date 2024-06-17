#include <iostream>
#include <string>
#include <cmath> // Include the <cmath> header for ceil() function
#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;
	int a,b,cnt=0;
	unordered_map<int,int> um;
	for(int i=0;i<n-1;i++){
		cin>>a>>b;
		um[a]++;
		um[b]++;
	}
	for(auto &it:um){
		if(it.second==1){
			cnt++;
		}
	}
	cout<<(cnt/2)+(cnt%2)<<"\n";
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

