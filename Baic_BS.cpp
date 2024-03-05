#include<bits/stdc++.h>
using namespace std;

void BS(vector<long long> &v, int l, int r, long long k) {
    if (v[0] > k) {
        cout << 0 << endl;
        return;
    }
    if (v[r] < k) {
        cout << r + 1 << endl;
        return;
    }
    int mid;
    while (l <= r) { // Corrected the loop condition
        mid = (l + r) / 2; // Corrected the calculation of mid
        if (v[mid] == k) {
            cout << mid + 1 << endl; // Adjusted the counting position
            return;
        } else if (v[mid] < k) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    cout << l << endl; // Adjusted the counting position
}

int main() {
    int n;
	long long k;
    cin >> n >> k;
    vector<long long> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    for (int i = 0; i < k; i++) {
        long long j;
        cin >> j; // Added missing semicolon
        BS(v, 0, n - 1, j); // Removed extra comma
    }
    return 0;
}

