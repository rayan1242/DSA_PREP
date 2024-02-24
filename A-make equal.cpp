#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()

void solve()
{
    int n;
    cin >> n;

    vector<int>a(n);
    int sum = 0;
    for(int i =0 ; i < n; ++i){
        cin >> a[i];
        sum += a[i];
    }

    int available = 0;
    int t = sum / n;
    for(int i = 0 ; i < n; ++i){
        // cout << t << " " << available << endl;
        if(a[i] > t){
            available += (a[i] - t) ;
        }
        else{
            available -= (t - a[i]);
        }
        if(available < 0){
            cout << "NO" << endl;
            return ;
        }
    }
    if(available < 0){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }

}

int main(){
        int t = 1;
        cin >> t;
        while(t--){
            solve();
        }
    return 0;
}