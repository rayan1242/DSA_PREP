#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n,length=0;
	cin>>n;
	vector<int> v(2*n);
	for(int i=0;i<2*n;i++){
		cin>>v[i];
	}
	sort(v.begin(),v.end());
	for(int i=0;i<n-1;i++){
			length+=abs(v[i]-v[i+1])+abs(v[2*n-i-1]-v[2*n-i-2]);
	}
	cout<<length<<"\n";
	for(int i=0;i<n;i++){
		cout<<v[i]<<" "<<v[2*n-i-1]<<"\n";
	}
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

