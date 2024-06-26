#include <iostream>
#include <string>
#include <cmath> // Include the <cmath> header for ceil() function
#include<bits/stdc++.h>
using namespace std;

void solve(){
	int ans=INT_MAX;
	int x1,x2,x3;
	cin>>x1>>x2>>x3;
	int mini=min({x1,x2,x3});
	int maxi=max({x1,x2,x3});
	//cout<<mini<<" "<<maxi<<"\n";
	for(int i=mini;i<=maxi;i++){
		//cout<<ans<<"\n";
		ans=min(ans,abs(x1-i)+abs(x2-i)+abs(x3-i));
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

