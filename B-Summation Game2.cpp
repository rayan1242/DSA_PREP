#include <iostream>
#include <string>
#include <cmath> // Include the <cmath> header for ceil() function
#include<bits/stdc++.h>
using namespace std;

solve(){
	int n,k,x,tsum=0,ans=INT_MIN;
	cin>>n>>k>>x;
	vector<int> a(n);
	for(auto &e:a){
		cin>>e;
		tsum+=e;
	}
	sort(a.begin(),a.end());
	int i=n-1,j=0;
	while(k){
		if(a.size()==0)
			break;
		int k=a[a.size()-1];
		a.pop_back();
		tsum-k;
		int l=x;
		int i=a.size();
		int csum=0;
		while(l){
			csum+=a[i];
			l--;
			i--;
		}
		ans=max(ans,tsum-csum);
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

