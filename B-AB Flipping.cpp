#include <bits/stdc++.h>
using namespace std;

void solve(string s, int n) {
    int f = 0;
    int cnt = 0;
    int cnt2 = 0;
    int sum = 0;
    for(int i = 0; i < n; i++) {
        while(s[i] != 'A' && f == 0) {
            f = 1;
        }
        while(s[i] != 'B' && s[i + 1] != 'A' && i + 1 < n) {
            if(s[i] == 'A') cnt++;
            if(s[i] == 'B') cnt2++;
            i++;
        }
        sum += (cnt - 1) + cnt2;
    }
    cout << sum << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        solve(s, n);
    }
    return 0;
}

