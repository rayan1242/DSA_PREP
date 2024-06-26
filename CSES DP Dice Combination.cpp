#include <iostream>
#include<vector>
using namespace std;
int mod=1000000007;
#define ll long long int
vector<ll> dp;
ll solve(int n){
	if(n==0)
		return 1;
	if(dp[n]!=-1)
		return dp[n];
	ll ans=0;
	for(int i=1;i<=6;i++){
		if(n-i<0) break;
		 ans=(ans%mod+solve(n-i)%mod)%mod;
	}
	return dp[n]=ans;
}

ll bottom_up(int n){
	dp.clear();
	dp.resize(1000005,0);
	dp[0]=1;
	for(ll i=0;i<=n;i++){
		for(int j=1;j<=6;j++){
			if(i-j<0) break;
			dp[i]=(dp[i]%mod+dp[i-j]%mod)%mod;
		}
	}
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

