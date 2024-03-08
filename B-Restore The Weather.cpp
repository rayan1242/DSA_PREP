#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>& a, vector<int>& b, int n, int k) {
    for (int i = 0; i < n; i++) {
        a[i] = abs(a[i] - k);
    }
    sort(b.begin(), b.end());
    vector<int> ans(n); // Initialize ans with size n
    for (int i = 0; i < n; i++) {
        int j = 0; // Initialize j inside the loop
        for (; j < n; j++) {
            if (b[j] >= a[i]) {
                ans[i] = b[j];
                break; 
            }
        }
        
    }
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl; // Print a newline after printing the answer for each test case
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        solve(a, b, n, k);
    }
    return 0; // Added return statement to indicate successful termination
}

