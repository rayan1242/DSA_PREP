#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void solve(vector<long long>& v, int n) {
	if(n==1){
		cout<<"NO"<<endl;
		return;
	}
    int ones=0;
	long long sum=0;
	for (int i = 0; i < n; i++) {
        sum+=v[i];
		if(v[i]==1) ones++;
    }
    if(sum-n>=ones){
    	cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
    
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> v(n);  // Initialize vector with size n
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        solve(v, n);
    }
    return 0;
}

