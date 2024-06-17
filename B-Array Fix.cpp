#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
    	bool l=1;
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int p=0;
    	for(int i=0;i<n;i++){
    		if(a[i]>=10 && a[i]/10>=p && a[i]%10>=a[i]/10){
    			p=a[i]%10;	
			}else{
				if(a[i]>=p)
					p=a[i];
				else{
					l=0;
					break;
				}
			}
		}
		cout<<(l?"YES":"NO")<<'\n';
    }
    return 0;
}

