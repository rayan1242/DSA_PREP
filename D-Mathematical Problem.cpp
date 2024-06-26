#include <iostream>
#include <string>
#include <cmath> // Include the <cmath> header for ceil() function
#include<bits/stdc++.h>
using namespace std;

solve(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	int ans=INT_MAX;
	vector<int> a(1000);
	for(int st=0;st<n-1;st++){
		int cnt=0;
		for(int i=0;i<n;i++){
			if(st==i){
				a[cnt++]=10*(s[i]-'0')+(s[i+1]-'0');
				i++;
			}
			else a[cnt++]=(s[i]-'0');
		}
		int val=0;
		for(int i=0;i<cnt;i++){
			if(a[i]==0){
				val=-1;
				break;
			}
			if(a[i]==1) continue;
			val+=a[i];
		}
		if(!val) val=1;
		if(val==-1) val=0;
		ans=min(ans,val);
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

