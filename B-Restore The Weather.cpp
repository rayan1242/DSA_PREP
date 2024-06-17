#include <iostream>
#include <string>
#include <cmath> // Include the <cmath> header for ceil() function
#include<bits/stdc++.h>
using namespace std;




int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    
    while (T--) {
        long long n,k;
	cin>>n>>k;
	vector<int> a(n),b(n),ans(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		cin>>b[i];
	}
	sort(b.begin(),b.end());
	vector<pair<int,int>> p;
	for(int i=0;i<n;i++){
		p.push_back(make_pair(a[i],i));
	}
	sort(p.begin(),p.end());
	for(int i=0;i<n;i++){
		a[p[i].second]=b[i];
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<"\n";
	
	}
	 return 0;
}
