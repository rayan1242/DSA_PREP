#include <iostream>
#include <string>
#include <cmath> // Include the <cmath> header for ceil() function
#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n,f=0;
    cin >> n;
    vector<int> a(n);
    for (int i=0;i<n;i++) {
        cin>>a[i];
    }
	for(int j=1;j<n-1;j++){
		if(a[j-1]<a[j] && a[j+1]<a[j]){
			cout<<"YES"<<"\n";
			cout<<j<<" "<<j+1<<" "<<j+2<<"\n";
			return;
		}
	}
	cout<<"NO"<<"\n";
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

