#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k, x, y;
        cin >> n >> m >> k;
        cin >> x >> y; // Changed comma to extraction operator

        vector<pair<int, int>> v;
        for (int i = 0; i < k; i++) {
            int a, b;
            cin >> a >> b;
            v.push_back(make_pair(a, b)); // Removed semicolon and unnecessary parentheses
        }

        bool possible = true;
        for (auto& f : v) {
            if ((x + y) % 2 == (f.first + f.second) % 2) { // Fixed logical condition
                cout << "NO" << endl;
                possible = false;
                break; // Break out of the loop if a conflict is found
            }
        }
        if (possible) // Check if it's still possible after looping
            cout << "YES" << endl;
    }
    return 0;
}

