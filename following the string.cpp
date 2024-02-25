#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void solve(vector<int>& a, int n) {
    unordered_map<int, int> m;
    for(int i = 0; i < n; i++) {
        cout << static_cast<char>('a' + m[a[i]]);
        m[a[i]]++;
    }
    cout << endl; // Add a newline after processing each test case
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }
        solve(v, n);
    }   
    return 0;
}

