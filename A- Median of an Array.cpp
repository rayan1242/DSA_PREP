#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> &a, int n) {
    sort(a.begin(), a.end());
    int k = ceil(n / 2.0); // Calculate median index and ensure floating-point division
    int c = a[k - 1]; // Subtract 1 from k to access the correct index
    int l = 0;
    for (int i = k - 1; i < n; i++) { // Start from k - 1 index
        if (a[i] == c) l++;
    }

    cout << l << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) { // Start from 0 index
            cin >> a[i];
        }
        solve(a, n);
    }
    return 0;
}

