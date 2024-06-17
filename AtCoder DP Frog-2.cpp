#include <iostream>
#include <string>
#include <cmath> // Include the <cmath> header for ceil() function
#include<bits/stdc++.h>
using namespace std;

#define ll long long int

vector<ll> dp;
ll f(int n,vector<int> &h,int k){
	dp.clear();
    dp.resize(100005,INT_MAX);
	dp[1]=0;
	for(int i=2;i<=n;i++){
		for(int j=1;j<=k;j++){
			if(i-j<0) break;
			dp[i]=min(
						dp[i],dp[i-j]+abs(h[i-j]-h[i])
					);
		}
	}
	return dp[n];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,k;
    cin>>n>>k;
    vector<int> h(n+1);
    for(int i=1;i<=n;i++){
    	cin>>h[i];
	}
	cout<<f(n,h,k)<<"\n";
    return 0;
}

