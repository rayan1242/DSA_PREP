#include <bits/stdc++.h>
using namespace std;
#define int long long
const int p = 1e9 + 7;

void solve(){
	
	long long x,n,y,z=0;
	cin>>x>>n;
	y=n%4;
	if(n%4==1){
		z=-n;
	}else if(n%4==2){
		z=1;
	}else if(n%4==3){
		z=n+1;
	}
	if(x&1){
		cout<<x-z<<"\n";
	}else{
		cout<<x+z<<"\n";
	}
}


signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--)
        solve();
    return 0;
}

