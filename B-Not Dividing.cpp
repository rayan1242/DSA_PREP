#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> &a,int n){
	int maxi=INT_MIN;
	for(int i=0;i<n;i++){
		maxi=max(a[i],maxi);
	}
	int m=maxi/2;
	for(int i=0;i<n;i++){
		if(a[i]<=m){
			a[i]=m+1;
			m++;
		}
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<"\n";
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> a(n);
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		solve(a,n);
	}
}
