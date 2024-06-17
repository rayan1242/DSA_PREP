#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    
    while (T--) {
        long long n;
        int YES = 0,f=1;
        cin >> n;
        if(n%2!=0){
        	cout<<"YES"<<"\n";
		}else if(n%2==0){
			long long k=sqrt(n);
			for (long long i = 2; i <= k; i++) {
	            if (k % i == 0) {
	                if (i % 2 != 0) {
	                	//cout<<i<<"\n";
	                    YES = 1;
	                    break;
	                }
	                k= k / i;
	           	}
	           	//cout<<i<<"\n";
	        }
		        if (YES) {
		            cout << "YES" << "\n"; 
		        } else {
		            cout << "NO" << "\n";  // Debug output
		       	}
		}
	}
        
    
    return 0;
}
