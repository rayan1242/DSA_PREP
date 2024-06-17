#include <bits/stdc++.h>
using namespace std;
#define int long long
const int P = 1e9 + 7;

void solve(){
	int a,b,c;
	cin>>a>>b>>c;
	if((2*b-c>0) && (2*b-c)%a==0){
		cout<<"YES"<<"\n";
	}else if((a+c)%(2*b)==0){
		cout<<"YES"<<"\n";
	}else if((2*b-a>0) && (2*b-a)%c==0){
		cout<<"YES"<<"\n";
	}else{
		cout<<"NO"<<"\n";
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

