#include <bits/stdc++.h>
using namespace std;

void solve(long long m, vector<long long>& v, int n) {
    long long ans = 0;
    for (int i = 0; i < n; i++) {
        ans += (long long)v[i]+m;
    }
    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long min1 = INT_MAX;
        long long min2 = INT_MAX;

        int n;
        cin >> n;
        vector<long long> v1, v2; // Corrected to empty vectors
        for (int i = 0; i < n; i++) {
            long long  a;
            cin >> a;
            v1.push_back(a);
            min1 = min(a, min1);
        }
        for (int i = 0; i < n; i++) {
            long long b;
            cin >> b;
            v2.push_back(b); // Corrected from "a" to "b"
            min2 = min(b, min2); // Corrected from "a" to "b"
        }
        if (n == 1) {
            cout << v1[0] + v2[0] << endl; // Corrected from "a" and "b" to v1[0] and v2[0]
            continue;
        }
        if (min1 < min2) {
            solve(min1, v2, n);
        } else {
            solve(min2, v1, n);
        }
    }
    return 0;
}

