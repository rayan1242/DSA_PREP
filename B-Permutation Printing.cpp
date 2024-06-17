#include <iostream>
#include <string>
#include <cmath> // Include the <cmath> header for ceil() function
#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;
	for(int i=0;i<=n;i++){
		if(i==floor(n/2.0) && n%2==0){
			break;
		}
		if(i==floor(n/2.0) && n%2!=0){
			cout<<ceil(n/2.0);
			break;
		}
		cout<<n-i<<" ";
		cout<<i+1<<" ";
	}
cout<<"\n";
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

