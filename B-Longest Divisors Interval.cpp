#include<bits/stdc++.h>
using namespace std;

const long long mod = 100000000;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        int cnt = 0;
        int maxi = 0; // Initialize maxi to 0
        long long sqrt_n = static_cast<int>(sqrt(n)) % mod; // Cast and apply modulo operation
        for (long long i = 1; i <= sqrt_n; i++) { // Start i from 1
            if (n % i == 0) {
                cnt++;
                maxi = max(cnt, maxi); // Update maxi when cnt is greater
            } else {
                cnt = 0; // Reset cnt if condition is not met
            }
        }
        cout << maxi << "\n";
    }
    return 0;
}

