#include <iostream>
#include <string>
#include <cmath> // Include the <cmath> header for ceil() function
#include<bits/stdc++.h>
using namespace std;

#define ll long long int

solve(){
	int x,y,k;
	cin>>x>>y>>k;
	while(x>1 && k>0){
		int rem= y-x%y;
		if(rem>=k){
			x+=k;
			k=0;
		}
		else{
			x+=rem;
			k-=rem;
		}
		while(x%y==0) x/=y;
	}
	if(k>0){
			k%=y-1;
			x+=k;		
	}	
	cout<<x<<"\n";
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

