#include <iostream>
#include <string>
#include <cmath> // Include the <cmath> header for ceil() function
#include<bits/stdc++.h>
using namespace std;

vector<int> dp;

int f(int n,vector<int> &h){
	if(n==1)
		return 0;
	if(n==2)
		return abs(h[1]-h[2]);
	if(dp[n]!=-1)
		return dp[n];
	return dp[n]=min((f(n-1,h)+abs(h[n-1]-h[n])),
					 (f(n-2,h)+abs(h[n-2]-h[n]))
					);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;
    dp.clear();
    dp.resize(100005,-1);
    vector<int> h(n+1);
    for(int i=1;i<=n;i++){
    	cin>>h[i];
	}
	cout<<f(n,h)<<"\n";
    return 0;
}

