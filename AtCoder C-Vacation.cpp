#include <iostream>
#include <vector>
#include <algorithm> // Include the algorithm header for max function

using namespace std;

int f(vector<vector<int>>& a) {
    int n = a.size();
    vector<int> v(3, 0);
    vector<vector<int>> dp(n, v);
    
    dp[n-1][0] = a[n-1][0];
    dp[n-1][1] = a[n-1][1];
    dp[n-1][2] = a[n-1][2];
    
    for (int i = n-2; i >= 0; i--) {
        dp[i][0] = a[i][0] + max(dp[i+1][1], dp[i+1][2]);
        dp[i][1] = a[i][1] + max(dp[i+1][0], dp[i+1][2]);
        dp[i][2] = a[i][2] + max(dp[i+1][1], dp[i+1][0]);
    }
    
    return max({dp[0][0], dp[0][1], dp[0][2]});
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    vector<vector<int>> a(n, vector<int>(3, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> a[i][j];
        }
    }
    
    cout << f(a) << endl;
    
    return 0;
}

