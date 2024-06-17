#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k,w=0;
		cin>>n>>k;
		vector<int> a(n);
		cin>>a[0];
		for(int i = 1; i < n; i++){
    		cin >> a[i];
    		if(a[i] < a[i - 1]){
     	 	  w++;
   		    }	
		}

		if(w==0){
			cout<<"YES"<<endl;
		}else{
			if(n==1 && k==1){
				cout<<"YES"<<endl;
			}else if(n>1 && k>1){
				cout<<"YES"<<endl;
			}else{
				cout<<"NO"<<endl;
			}
		}
		
		
	}
}
