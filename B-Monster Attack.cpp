#include <iostream>
#include <string>
#include <cmath> // Include the <cmath> header for ceil() function
#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n,k;
	cin>>n>>k;
	vector<int> a(n);
	vector<int> x(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		cin>>x[i];
	}
	int l=k,i=0;
	while(l>0 && a[i]>0){
		if(i>=n){
				break;
		}
		if(a[i]<0){
			i++;
		}
		l-=a[i];
		a[i]=(a[i]-l);
		if(a[i]>l && (x[i]==-1 || x[i]==1)){
				cout<<"NO"<<"\n";
				break;
			}
		if(l<=0){
			for(int j=0;j<n;j++){
				if(a[j]>0){
					x[j]-=1;
				}
			}
			if(a[i]<0){
				i++;
			}
			l=k;
			if(i>n){
				break;
			}
		}	
	}
	if(i==n){
		cout<<"YES"<<"\n";
	}
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

