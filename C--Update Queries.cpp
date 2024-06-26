#include <iostream>
#include <string>
#include <cmath> // Include the <cmath> header for ceil() function
#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n,m;
	cin>>n>>m;
	string s;
	cin>>s;
	vector<int> ind(m);
	for(auto &e:ind){
		cin>>e;
	}
	string c;
	cin>>c;
	sort(ind.begin(),ind.end());
	sort(c.begin(),c.end());
	vector<int> u;
	//cout<<ind[0]<<"\n";
	u.push_back(ind[0]);
	for(int i=1;i<ind.size();i++){
		if(ind[i-1]==ind[i]) continue;
		u.push_back(ind[i]);
		//cout<<ind[i]<<" ";
	}
	//cout<<"\n";
	for(int i=0;i<u.size();i++){
		//cout<<s[u[i]-1]<<" "<<c[i]<<"\n";
		s[u[i]-1]=c[i];
		//cout<<s[u[i]-1]<<" "<<c[i]<<"\n";
	}
	cout<<s<<"\n";
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

