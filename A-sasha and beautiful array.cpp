#include<bits/stdc++.h>
using namespace std;

int summ(vector<int>& a, int n){
    int s = 0;
    for(int i = 1; i < n; i++){ // Start from 0, not 1
        s += a[i] - a[i-1]; // Use 'a' instead of 'arr'

    }
    return s;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr;
        for(int i = 0; i < n; i++){ // Add opening brace
            int k;
            cin >> k;
            arr.push_back(k);
        }
        sort(arr.begin(), arr.end()); // Use sort from algorithm header
        cout << summ(arr, n) << endl;

    }
    return 0;
}
