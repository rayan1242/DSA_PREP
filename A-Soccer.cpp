#include <iostream>
#include <string>
#include <cmath> // Include the <cmath> header for ceil() function
#include<bits/stdc++.h>
using namespace std;

#define ll long long int

void solve(){
	ll x1,x2,y1,y2;
	cin>>x1>>y1;
	cin>>x2>>y2;
	if(y1<x1 && x1<=x2 && x2<y2 || x1<y1 && y1<=y2 && y2<x2){
		cout<<"NO"<<"\n";
	}else{
		cout<<"YES"<<"\n";
	}
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

