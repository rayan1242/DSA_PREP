#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> & v) {
	if (v[0] == v[1] && v[1] ==v[2]) {
            cout << "YES" << endl;
            return;
    }else if(v[1] % v[0] == 0 and v[2] % v[0] == 0){
        int l = (v[1] / v[0])-1;
        int m = (v[2]/ v[0])-1;
        if (l + m <= 3) {
            cout << "YES" << endl;
            return;
        }
	}
        cout << "NO" << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        vector<int> v={a,b,c};
        sort(v.begin(),v.end());
        solve(v);
    }
    return 0;
}

