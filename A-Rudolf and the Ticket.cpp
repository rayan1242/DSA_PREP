#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> a(n), b(m);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < m; i++){
            cin >> b[i];
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        int cnt = 0;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(a[i] + b[j] <= k) {
                    cnt++;
                } else {
                    break; // No need to check further for this element in array 'b'
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}

