#include <iostream>
#include <string>
#include <cmath> // Include the <cmath> header for ceil() function
#include<bits/stdc++.h>
using namespace std;

vector<int> dx{-1,0,+1,0};
vector<int> dy{0,-1,0,+1};

bool in(int x,int y,int n,int m){
	return (0<=x && x<n && 0<=y && y<m);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    while (T--) {
    int n,m;
	cin>>n>>m;
    vector<vector<int>>a(n,vector<int>(m));
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			int mx=0;
			for(int k=0;k<4;k++){
				int ni=i+dx[k];
				int nj=j+dy[k];
				if(in(ni,nj,n,m)){
					 mx=max(mx,a[ni][nj]);
				}
			}
			a[i][j]=min(a[i][j],mx);
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
}
    
    return 0;
}

