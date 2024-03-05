#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n); // Resize the vector to size n
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            sum += (long long)v[i];
        }
        long long sqrt_sum = sqrt(sum);
        if ((long long)(sqrt_sum * sqrt_sum) == sum) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}

