#include <bits/stdc++.h>
using namespace std;

int sat_const(vector<pair<int, int>> input) {
    int m = INT_MAX;
    int ma = INT_MIN;
    int ans = 0;

    cout << "Initial ans: " << ans << endl;

    for (int i = 0; i < input.size(); i++) {
        if (input[i].first == 1) {
            m = min(m, input[i].second);
        } else if (input[i].first == 2) {
            ma = max(ma, input[i].second);
        }
    }

    ans = ma - m + 1;

    for (int i = 0; i < input.size(); i++) {
        if (input[i].first == 3 && m >= input[i].second && input[i].second <= ma) {
            ans--;
        }
    }

    cout << "Final ans: " << ans << endl;

    return ans;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<pair<int, int>> input;

        while (n > 0) {
            int a, x;
            cin >> a >> x;
            input.emplace_back(a, x);
            n--; // Decrement n inside the loop
            cout << "Remaining n: " << n << endl;
        }

        int result = sat_const(input);
        cout << "Result: " << result << endl;
    }

    return 0;
}

