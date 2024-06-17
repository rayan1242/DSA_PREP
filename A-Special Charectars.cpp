#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(n%2!=0){
			cout<<"NO"<<"\n";
		}else{
			int k=n/2;
			string s="";
			while(k){
				k--;
				s+="AAB";
			}
			cout<<"YES"<<"\n";
			cout<<s<<"\n";
		}
	}
}
