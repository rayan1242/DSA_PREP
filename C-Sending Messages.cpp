#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void solve(vector<int> &v, int n, long long f, long long a, long long b) {
    for (int i = 1; i < n+1; i++) {
        f -= min(a * (v[i] - v[i - 1]), b);
    }
    if (f > 0) { // Changed condition to f >= 0
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long f,a,b;
        int n;
        cin >> n; 
        cin >> f >> a >> b;
        vector<int> v(n+1);
        for (int i = 1; i < n+1; i++) {
            cin >> v[i];
        }
        solve(v, n, f, a, b);
    }
    return 0;
}

