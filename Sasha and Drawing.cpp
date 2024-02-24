#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int solve(int n, int k) {
    if(k==(4*n-2)) return ceil(k/2.0) +1;
    else{
        return ceil(k/2.0);
    }
    return 0;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        cout << solve(n, k) << endl;
    }
    return 0;
}
