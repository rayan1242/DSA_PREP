#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> c(n);
    vector<int> cnt(101);
    for (int i = 0; i < n; i++) {
        cin >> c[i];
        cnt[c[i]]++;
    }
    sort(cnt.begin(),cnt.end());
    if(cnt[cnt.size()-1]>=k)
    	cout<<k-1<<"\n";
    else
    	cout<<n<<"\n";
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

