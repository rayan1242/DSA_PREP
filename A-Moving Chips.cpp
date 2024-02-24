#include <iostream>
#include <vector>
using namespace std;

int solve(int n) {
    int cnt = 0;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int i = 0;
    while (v[i] != 1 && i < n) {
        i++;
    }
    int j = n - 1;
    while (v[j] != 1 && j >= 0) {
        j--;
    }
    if (i == j) return 0;
    while (i < j) {
        if (v[i] == 0) cnt++;
        i++;
    }
    return cnt;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << solve(n) << endl;
    }
    return 0;
}
