#include<bits/stdc++.h>
using namespace std;

int minimizeInvesions(vector<int>& a,vector<int>& b,int n){
	int inv1=0;
	int inv2=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]) inv1++;
			if(b[i]>b[j]) inv2++;

		}
	}

}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> a;
		vector<int> b;
		for(int i=0;i<n;i++){
			int k;
			cin>>k;
			a.push_back(k);
		}
			cout<<"\n";
		for(int j=0;j<n;j++){
			int k;
			cin>>k;
			b.push_back(k);
		}
		
		minimizeInvesions(a,b,n);
		return 0;
	}
}