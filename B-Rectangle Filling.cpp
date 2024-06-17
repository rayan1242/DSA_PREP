#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n,m,f=0;
	cin>>n>>m;
	 vector<int> v;
	 vector<vector<int>> vv;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			char c;
			cin>>c;
			v.push_back(c);
		}
		vv.push_back(v);
	}
	for(int i=0;i<m-1;i++){
		if(vv[0][i]!=vv[0][i+1]){
			f=1;
			break;
		}
	}
	for(int i=0;i<m-1;i++){
		if(vv[n-1][i]!=vv[n-1][i+1] || vv[n-1][0]==vv[0][0]){
			f=1;
			break;
		}
	}
	
	for(int i=0;i<n-1;i++){
		if(vv[i][0]!=vv[i+1][0]){
			f=1;
			break;
		}
	}
	for(int i=0;i<n-1;i++){
		if(vv[i][m-1]!=vv[i+1][m-1] || vv[0][m-1]==vv[0][0]){
			f=1;
			break;
		}
	}
	if(f){
		cout<<"YES"<<"\n";
	}else{
		cout<<"NO"<<"\n";
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

