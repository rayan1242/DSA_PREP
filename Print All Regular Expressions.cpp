#include<bits/stdc++.h>
using namespace std;

string result;

bool solve(int n, const string& input, string s, int open, int close) {
    if (s.size() == 2 * n) {
        size_t found = input.find(s);
        if (found == string::npos) {
        
            return true;
        }
        return false;
    }
    if (open < n) {    
        if (solve(n, input, s + '(', open + 1, close)) {
            return true;
        }
    }
    if (close < open) {
        if (solve(n, input, s + ')', open, close + 1)) {
            return true;
        }
    }
    return false;
}

int main() {
    int testCases;
    cin >> testCases;
    while (testCases--) {
        string input;
        cin >> input;
        int n = input.size() / 2; // Length of the regular bracket sequence
        if (solve(n, input, "", 0, 0)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}

