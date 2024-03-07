#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        vector<int> s(v.begin(), v.end());
        sort(v.begin(), v.end());
        int i;
        for (i = 0; i < n; i++) {
            if ((s[i] % 2 == 0 == v[i] % 2 == 0) ) {
                continue;
            } else {
                break;
            }
        }
        if (i == n) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    return 0;
}

