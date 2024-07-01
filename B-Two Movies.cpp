#include <iostream>
#include <string>
#include <cmath> // Include the <cmath> header for ceil() function
#include<bits/stdc++.h>
using namespace std;
 
void solve() {
   int n;
   int ans=0;
   cin>>n;
   vector<int> a(n);
   vector<int> b(n);
   for(auto &e:a){
   	cin>>e;
   }
   for(auto &e:b){
   	cin>>e;
   }
    int r1=0,r2=0,m1=0,m2=0;
   	for(int i=0;i<n;i++){
   		if(a[i]>b[i]) r1+=a[i];
   		else if(a[i]<b[i]) r2+=b[i];
   		else if(a[i]==1) m1++;
   		else if(a[i]==-1) m2++;
	}
	while(m1--){
		if(r1<r2) r1++;
		else r2++;
	}
	while(m2--){
		if(r2<r1) r1--;
		else r2--;
	}
	cout<<min(r1,r2)<<"\n";
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
