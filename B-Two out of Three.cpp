#include <iostream>
#include <string>
#include <cmath> // Include the <cmath> header for ceil() function
#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n,cnt=0;
	cin>>n;
	vector<int> a(n);
	vector<int> b(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	unordered_map<int,int> um;
	for(int i=0;i<n;i++){
		um[a[i]]++;
	}
	for(auto& it:um){
		if(it.second>=2){
			cnt++;
		}
		it.second=0;
	}
	if(cnt<2){
		cout<<-1<<"\n";
	}else{
		int used2=0,used3=0;
		for(int i=0;i<n;i++){
			um[a[i]]++;
			if(um[a[i]]<2){
				b[i]=1;
			}
			else if(um[a[i]]==2){
				if(used2){
					b[i]=3;
					used3=1;
					used2=0;
				}else{
					b[i]=2;
					used3=0;
					used2=1;
				}
			}else if(um[a[i]]>2){
				b[i]=1;
			}
		}
		for(int i=0;i<n;i++){
			cout<<b[i]<<" ";
		}
		cout<<"\n";
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

