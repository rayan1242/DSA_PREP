#include <bits/stdc++.h>
using namespace std;

void solve(string s, int n, int k) {
    unordered_map<char, int> um;
    for (int i = 0; i < s.size(); i++) {
        um[s[i]]++;
    }
    int i = 0;
    while (k && i < s.size()) {
        if (um[s[i]] % 2 != 0) {
            um[s[i]]--;
            k--;
        }
        i++;
    }
    int cnt = 0;
    for (auto it = um.begin(); it != um.end(); it++) {
        if (it->second % 2 != 0) cnt++;
    }
    if (cnt > 1)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        solve(s, n, k);
    }
    return 0;
}

