#include <bits/stdc++.h>
using namespace std;

int solve(int n, int k, vector<int> &v) {
    int cnt = 1, ans = 1;
    vector<int> diff(n - 1);
    for (int i = 1; i < n; i++) {
        diff[i - 1] = abs(v[i] - v[i - 1]);
    }
    for (int i = 0; i < n - 1; i++) {
        if (diff[i] <= k) {
            cnt++;
            ans = max(ans, cnt);
        } else {
            cnt = 1;
        }
    }
    return n-ans;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        cout << solve(n, k, v) << endl;
    }
    return 0;
}

