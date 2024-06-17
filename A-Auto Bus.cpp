#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        
        if(n<=3 || n%2!=0){
        	cout<<-1<<"\n";
		}else{
			n=n/2;
			long long mini,maxi;
			mini=ceil(n/3.0);
			maxi=n/2;
			cout<<min({mini,maxi})<<" "<<max({mini,maxi})<<"\n";
		}
		// If the total number of wheels is less than 4 or odd (except 2)
		
    }
    return 0;
}

