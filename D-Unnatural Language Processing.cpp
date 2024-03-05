#include <iostream>
#include <vector>
#include <set>
#include <string> // Added include for string
using namespace std;

void solve(string s, long long n) {
    int i=0;
    if(n==2){
        cout<<s<<endl;
    }
    if(n==3){
        cout<<s<<endl;
    }
    set<char> c = {'b', 'c', 'd'}; // Added missing semicolon
    set<char> v = {'a', 'e'};
    if(n>3){
        for (int i = 0; i <s.size()-3; i++) {
            if (c.count(s[i + 3]) && c.count(s[i + 4])) { // Check index bounds
                s.insert(i + 3, 1, '.');
                i += 3;
            }
            if (c.count(s[i + 2]) && !c.count(s[i + 3])) { // Check index bounds
                s.insert(i + 2, 1, '.');
                i += 2;
            }
        }
        cout << s << endl; // Added endl for formatting
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        string s;
        cin >> s;
        solve(s, n);
    }
    return 0;
}

