#include <iostream>
#include <string>
#include <cmath> // Include the <cmath> header for ceil() function
#include<bits/stdc++.h>
using namespace std;
int mod = 1e7+9;
solve(){
	
	long long n,k,sum=0;
	cin>>n>>k;
	vector<int> a(n*k);
	//cout<<n*k<<"\n";
	for(auto &e:a){
		cin>>e;
	}
	long long m=0;
	if(n%2==0)
		m = n-ceil(n/2)+1;
	else
		m = n-ceil(n/2);
	//cout<<m<<" "<<n*k-1-m+1<<"\n";
	for(int i=n*k-1-m+1;i>=0;i-=m){
		//cout<<a[i]<<" "<<"K:"<<k<<" "<<"\n";
		if(k==0)
			break;
		sum+=a[i];
		k--;
	}
	cout<<sum%mod<<"\n";
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
