#include <iostream>
#include <string>
#include <cmath> // Include the <cmath> header for ceil() function
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s, t, a;
    cin >> s >> t;
    
    a += s[0];
    int i = 0;
    
    while (i < n) {
        if (s[i + 1] == t[i] || s[i + 1] < t[i]) {
            i++;
            a += s[i];
            if (i == n - 1) {
                a += t[i];
            }
        }
        if (s[i + 1] > t[i]) {
            while (i != n) {
                a += t[i];
                i++;
            }
            break;
        }
    }
    
    int cnt = 1;
    // Finding the number of strings like 'a' that can be formed from 's' and 't'
    for (int k = 0; k < n; k++) {
        string l = a.substr(0, k);
        string m = a.substr(n - 1 - k); // Corrected indexing
        // Check if 'l' is a substring of 's' and 'm' is a substring of 't'
        for (int i = 0; i < l.size(); i++) {
            if (s[i] != l[i]) {
                break;
            }
            if (i == l.size() - 1 && s[i] == l[i]) {
                cnt++;
            }
        }
        for (int i = k; i < n; i++) {
            if (s[i] != m[k  - i]) { // Corrected indexing
                break;
            }
            if (i == n - 1 && s[i] == m[k  - i]) { // Corrected indexing
                cnt++;
            }
        }
    }
    
    cout << a << "\n";
    cout << ceil(static_cast<double>(cnt) / 2.0) << "\n"; // Corrected ceil() usage and casting
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

