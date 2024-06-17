#include<bits/stdc++.h>
using namespace std;

void solve(int n,vector<int> &a){
    int cnt = 0; // Initialize cnt
    int i = 0;
    while(a[i]==0 && i<n){
        i++;
    }
    int j = n-1;
    while(a[j]==0 && j>=0){ // Change j > 0 to j >= 0
        j--;
    }
    if(i>j){
    	cout<<cnt<<"\n";
    	return;
	}
    if(i==j || j==i){
    	cnt+=1;
    	cout<<cnt<<"\n";
    	return;
	}
	if(i!=n-1){
		cnt+=1;
	}
    while(i<=j){
		if(a[i]==0){
	        cnt+=1;
	        break;
	    }
	    i++;
    }
        
    cout<<cnt<<"\n";
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
        solve(n,a);
    }
    return 0; // Add return statement
}

