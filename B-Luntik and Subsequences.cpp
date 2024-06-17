#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;
	vector<long long> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	long long cnt1=0,cnt0=0;
	for(int i=0;i<n;i++){
		if(a[i]==1) cnt1++;
		if(a[i]==0) cnt0++;
	}
	long long k=pow(2,cnt0);
	cout<<k*cnt1<<"\n";
	
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

