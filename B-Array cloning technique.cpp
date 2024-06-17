#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T;
    cin >> T;
    while (T --> 0) {
        int n;
        cin >> n;
        map<int, int> q;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            ++q[x];
        }
        int am = 0;
        for (auto &it : q) {
            am = max(am, it.second);
        }
        if(am==n) cout<<0<<"\n";
        else{
        	int cnt=1;
        	while(am<n){
	        	if(am+am>=n){
	        		cnt+=(n-am);
					break;	
				}
				cnt+=am;
				am=am*2;
				cnt++;	
			}
			cout<<cnt<<"\n";
		}
	}
    return 0;
}
