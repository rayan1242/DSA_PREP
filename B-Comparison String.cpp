#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	int cgt=0,maxcgt=INT_MIN;
	for(int i=0;i<n;i++){
		while(s[i]=='>' && i<n) {
			cgt++;
			maxcgt=max(cgt,maxcgt);
			i++;
		}
		cgt=0;
	}
	int clt=0,maxclt=INT_MIN;
	for(int i=0;i<n;i++){
		while(s[i]=='<' && i<n) {
			clt++;
			maxclt=max(clt,maxclt);
			i++;
		}
		clt=0;
	}
	cout<<max(maxcgt,maxclt)+1<<"\n";
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

