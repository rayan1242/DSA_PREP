#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int cnt=0,i = 0,k=0;
    for (i; i < n-2; i++) {
        if (a[i] < 0) {
            break;
        }
        if(a[i]==0) k++;
        if (a[i] > 0) {
            a[i] -= 1;
            a[i+1] -= 2;
            a[i+2] -= 1;
            i = 0;
        }
    }
    if (k== n-1) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
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

