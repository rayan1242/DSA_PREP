#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    
    int x = log2(k);
    vector<int> result;
	if(n==1){
		cout<<k<<"\n";
	}else{
		x--;
	    int sum = 0;
	    while (x >= 0) {
	        sum += pow(2, x);
	        x--;
	    }
	    result.push_back(sum);
	    result.push_back(k - sum);
	    n -= 2;
	
	    while (n > 0) {
	        result.push_back(0);
	        n--;
	    }
		
	    for (int i = 0; i < result.size(); i++) {
	        cout << result[i] << " ";
	    }
	    cout << "\n";
		}
	    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    
    while (T--) {
        solve();
    }
    
    return 0;
}

