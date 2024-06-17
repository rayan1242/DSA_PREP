#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n,cnt=0;
	cin>>n;
	map<int,int> mp;
	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
		mp[v[i]]++;
	}
	for(auto &it:mp){
		if(it.second<3){
			continue;
		}
		if(it.second==4) {
			cnt++;
			continue;
		}
		if(it.second==5) {
			cnt++;
			continue;
		}

		int k=it.second/3;
		cnt+=k;
		}
	cout<<cnt<<"\n";
	
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

