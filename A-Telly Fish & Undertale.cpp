#include <bits/stdc++.h>
using namespace std;

void solve(int a, int b, int n, vector<int>& v) {
    long long sum = b;
    for (int i =0; i<n; i++) {
        sum += min(a-1,(v[i]));
    }
    cout<<sum<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, n;
        cin >> a >> b >> n;
        vector<int> v(n);  // Initialize vector with size n
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        solve(a, b, n, v);
    }
    return 0;
}

