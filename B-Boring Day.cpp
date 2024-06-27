#include <iostream>
#include <string>
#include <cmath> // Include the <cmath> header for ceil() function
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
int mod =1000000007;
void solve(){
	int n,l,r;
	cin>>n>>l>>r;
	vector<int> a(n);
	for(auto &e:a){
		cin>>e;
	}
	ll sum=0;
	int i=0;
	int cnt=0;
	for(int i=0;i<n;i++){
		if(l<=a[i] && a[i]<=r){
			a[i]=-1;
			cnt++;
		}
		if(a[i]>r){
			a[i]=-1;
		}
	}
	i=0;
	while(sum<l && i<n){
		if(a[i]==-1) {
			i++;
			sum=0;
			continue;
		}
		sum=(sum%mod+a[i]%mod)%mod;
		if(l<=sum && sum<=r){
			cnt++;
			sum=0;
			i++;
		}
		else if(sum<l){
			i++;
		}
		else if(sum>r){
			sum=0;
			i++;
		}
		else{
			i++;
		}
		
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

