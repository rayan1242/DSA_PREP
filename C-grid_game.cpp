#include<bits/stdc++.h>
using namespace std;

void solve(int tc){
		string s;
		cin>>s;
		long long n=s.size();
		long long v=0,h=0;
		for(long long i=0;i<n;i++){
			if(s[i]=='0'){
				cout<<2<<" "<<v+1<<endl;
				v=(v+1)%4;
			}
			else{
				cout<<1<<" "<<h+1<<endl;
				h=(h+2)%4;
			}
		}	
	
}

int main(){
	int tc=1;
	for(int t=0;t<tc;t++){
		solve(t);
	}
	return 0;
}
