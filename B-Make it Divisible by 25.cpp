#include<bits/stdc++.h>
using namespace std;

void solve() {
	string s;
	cin>>s;
	int n=s.size();
	int ans=n;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
		   	int  nums=(s[i]-'0')*10 +(s[j]-'0');
			if(nums%25==0){
				ans=min(ans,(j-i-1) + (n-1-j));
			}				
		}
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

