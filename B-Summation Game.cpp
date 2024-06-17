#include <iostream>
#include <string>
#include <cmath> // Include the <cmath> header for ceil() function
#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n,x,k,ans=INT_MIN;
	cin>>n>>k>>x;
	int maxi=INT_MIN;
	vector<int> a(n);
	vector<int> pref(n+1);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a.begin(),a.end());
	for(int i=1;i<=n;i++){
		pref[i]=pref[i-1]+a[i-1];
	}
	for(int i=n-1;i>=0;i--){
		int csum=INT_MIN;
		csum=pref[i+1] - (pref[i+1] - pref[i-x]);
		ans=max(ans,csum);
			
	}
	cout<<ans<<"\n";
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

