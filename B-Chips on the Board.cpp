#include <iostream>
#include <string>
#include <cmath> // Include the <cmath> header for ceil() function
#include<bits/stdc++.h>
using ll = long long;
using namespace std;

void solve(){
	int n;
	cin>>n;
	ll miniA=INT_MAX;
	ll miniB=INT_MAX;
	ll sumA=0,sumB=0;
	for(int i=0;i<n;i++){
		ll a;
		cin>>a;
		miniA=min(a,miniA);
		sumA+=a;
	}
	for(int i=0;i<n;i++){
		ll b;
		cin>>b;
		miniB=min(b,miniB);
		sumB+=b;
	}
	ll a1=sumB+n*(miniA);
	ll a2=sumA+n*(miniB);
	a1>a2?cout<<a2<<"\n":cout<<a1<<"\n";
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

