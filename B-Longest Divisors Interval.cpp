#include<bits/stdc++.h>
using namespace std;
 
int main() {
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        if(n%2!=0) cout<<1<<"\n";
        else{
        	int i=1;
			for(i;i<n;i++){
				if(n%i!=0){
					break;
				}
			}
			cout<<i-1<<"\n";	
		}
    }
    return 0;
}
