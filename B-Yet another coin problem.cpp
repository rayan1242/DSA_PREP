#include <bits/stdc++.h>
using namespace std;


void solve() {
	vector<long long> v{1,2,1,2,3,1,2,3,2,1,2,2,2,3};
    long long n;
    cin>>n;
    if(n%15==0){
    	cout<<n/15<<"\n";
	}
    else if(n>15 && n%15==8){
    	cout<<(n/15)+2<<"\n";
	}else if(n>15 && n%15==5){
		cout<<n/15+1<<"\n";
	}else{
		int k=n%15;
		cout<<(n/15)+v[k-1]<<"\n";		
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

