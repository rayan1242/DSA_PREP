#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n, q, tsum = 0;
    cin >> n >> q;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        tsum += a[i];
    }
    vector<int> psum(n);
    psum[0] = a[0];
    for (int i = 1; i < n; i++) {
        psum[i] = psum[i - 1] + a[i];
    }

    while (q--) {
        int l, r, k;
        cin >> l >> r >> k;
        int remove = psum[r - 1] - (l > 1 ? psum[l - 2] : 0);
        int ans = tsum - remove + k * (r - l + 1);
        if (ans % 2 == 0) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
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

