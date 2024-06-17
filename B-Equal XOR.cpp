#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        vector<int> b(n);
        vector<int> ans1;
        vector<int> ans2;
        int cnt1 = 0,cnt2=0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        for (int i = 1; i < n; i++) {
            if (a[i - 1] == a[i]) {
                ans1.push_back(a[i - 1]);
                ans1.push_back(a[i]);
                a[i - 1] = -1;
                a[i] = -1;
                cnt1 += 2;
            }
        }

        for (int i = 1; i < n; i++) {
            if (b[i - 1] == b[i]) {
                ans2.push_back(b[i - 1]);
                ans2.push_back(b[i]);
                b[i - 1] = -1;
                b[i] = -1;
                cnt2 += 2;
            }
        }
        for (int i = 0; i < n && cnt1 < 2 * k; i++) {
            if (a[i] != -1) {
                ans1.push_back(a[i]);
                cnt1++;
            }
        }

        for (int i = 0; i < n && cnt2 < 2 * k; i++) {
            if (b[i] != -1) {
                ans2.push_back(b[i]);
                cnt2++;
            }
        }

        for (int i = 0; i < 2*k; i++) {
            cout << ans1[i] << " ";
        }
        cout << "\n";

        for (int i = 0; i < 2*k; i++) {
            cout << ans2[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

