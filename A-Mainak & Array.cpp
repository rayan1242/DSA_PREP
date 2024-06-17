#include <bits/stdc++.h>
using namespace std;
#define int long long
const int P = 1e9 + 7;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int amax = 0;
    int amin = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (amax <= a[i]) {
            amax = a[i];
        }
        if (amin >= a[i]) {
            amin = a[i];
        }
    }
    if(a[0]==amin || a[n-1]==amax){
    	cout<<amax-amin<<"\n";
	}
     else {
        int k = 0;
        for (int i = 0; i < n - 1; i++) { // Changed variable name in the inner loop
            k = max(k, a[i] - a[i + 1]);
        }
        k=max(k,a[n-1]-a[0]);
        cout << k << "\n";
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--)
        solve();
    return 0;
}

