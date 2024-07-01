#include <iostream>
#include <string>
#include <cmath> // Include the <cmath> header for ceil() function
using namespace std;
 
void solve() {
    int cnt[26] = {0}; // Initialize the count array for alphabets
    string a, b;
    cin >> a;
    cin >> b;
 	int m=b.size();
    int n=a.size();
    int ptr;
    int ans=m+n;
    for(int st=0;st<m;st++){
    	ptr=st;
    	for(int i=0;i<n;i++){
    		if(ptr<m && b[ptr]==a[i]) ptr++;
		}
		ans=min(ans,m+n-ptr+st);
	}
	cout<<ans<<"\n";
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
