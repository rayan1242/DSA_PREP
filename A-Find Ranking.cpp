#include <bits/stdc++.h>
using namespace std;

void solve(string s) {
    int n = s.size();

     
        bool valid_split_found = false;
        for(int i = 1; i < n; i++) {
            if(i==n)  cout<<-1<<endl;
            if(s[i] == '0') continue;
            string k = s.substr(0, i);
            string l = s.substr(i, n - i);
            if(stoi(k) >= stoi(l)){
                cout << -1 << endl;
                valid_split_found = true;
                break;
            }
            else {
                cout << k << " " << l << endl;
                valid_split_found = true;
                break;
            }
        }
        if(!valid_split_found) // If no valid split found
            cout << -1 << endl;
    }


int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        solve(s);
    }
    return 0;
}
