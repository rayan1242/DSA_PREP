#include <iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<ll> dp;

vector<int> getDigits(int n){
	vector<int> res;
	int rem;
	while(n>0){
			if(n%10!=0)
				res.push_back(n%10);
		n/=10;
	}	
	return res;
}

ll solve_bu(int n){
	dp.clear();
	dp.resize(1000005,INT_MAX);
	for(int i=1;i<=9;i++) dp[i]=1;
	for(int i=10;i<=n;i++){
		vector<int> dig=getDigits(i);
		for(int j=0;j<dig.size();j++){
			dp[i]=min(dp[i],1+dp[i-dig[j]]);
		}
		return dp[n];
	}
}

ll solve(int n){
	ll ans=INT_MAX;
	if(n<=9) return 1;
	if(dp[n]!=-1) return dp[n];
	vector<int> dig=getDigits(n);
	for(int i=0;i<dig.size();i++){
		ans=min(ans,solve(n-dig[i]));
	}
	return dp[n]=ans+1;
}

ll bottom_up(int n){

	return dp[n];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    dp.clear();
    dp.resize(1000005,-1);
    cout<<solve(n);
    return 0;
}

