#include <bits/stdc++.h>
using namespace std;

void solve(string s, string f, int n) {
    int new_one = 0;
    int extra_one = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '0' && f[i] == '1') {
            new_one++;
        } else if (s[i] == '1' && f[i] == '0') {
            extra_one++;
        }
    }
    if (extra_one <= new_one) {
        cout << new_one << endl;
    } else {
        cout << extra_one << endl;
    }
}

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin >> n;
        string s, f;
        cin >> s;
        cin >> f;
        solve(s, f, n);
    }
    return 0;
}
