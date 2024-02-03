#include<bits/stdc++.h>
using namespace std;

int solve(int a,int b){
		int result=1;
		while(b){
			if(b&1){
				result*=a;
			}
			a*=a;
			b/=2;
		}
		return result;
	}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;
        cout << solve(a, b) << endl;
    }

    return 0;
}

