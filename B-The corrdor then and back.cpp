#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int k = INT_MAX; // Initialize k to a large value
        while(n--){
            int d, s;
            cin >> d >> s; // Corrected input statement
            k = min(k, d + (s - 1) / 2); // Corrected min function and added proper division
        }
        cout << k << endl;
    }
    return 0;
}

