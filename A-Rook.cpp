#include <iostream>
#include <vector>
using namespace std;

void solve(string s, vector<char>& a, vector<char>& b) {
    for(int i = 0; i < 8; i++) {
        if(s[1] == b[i]) {
            continue;
        }
        else{
                cout << s[0] << b[i] << endl;
            }
    }
    for(int i = 0; i < 8; i++) {
        if(s[0] == a[i]) continue;
        cout << a[i]<< s[1] << endl;
    }
}

int main() {
    vector<char> a = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
    vector<char> b = {'1', '2', '3', '4', '5', '6', '7', '8'};
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        solve(s, a, b);
    }   
    return 0;
}

