#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,maxxi=0;
		cin>>n;
		for(int i=1;i<=n;i++){
			int k;
			cin>>k;
				maxxi=__gcd(abs(k-i),maxxi);
		}
		cout<<maxxi<<"\n";
	}
}
