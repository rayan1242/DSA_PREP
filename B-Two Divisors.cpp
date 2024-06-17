#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}


void solve() {
    long long x, y;
    cin >> x >> y;
	if(y%x==0) cout<<y*(y/x)<<"\n";
	else{
		cout<<y*(x/gcd(x,y))<<"\n";
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

