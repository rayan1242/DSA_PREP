#include<bits/stdc++.h>
using namespace std;

void solve(){
	unordered_map<long long,int> m;
	int n;
	cin>>n;
	vector<long long> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
    vector<long long> t(a.begin(),a.end());
	vector<long long> p;
	sort(a.begin(),a.end());
	long long sum=0;
	for(int j=0;j<n;j++){
		sum+=a[j];
		p.push_back(sum);
		//cout<<p[j]<<"\n";
	}
	m[a[n-1]]=n-1;
	int cnt=n-1;
	int k=0;
	for(int i=n-2;i>=0;i--){
		if(p[i]>=a[i+1]){
			k++;
		}
		if(p[i]<a[i+1]){
			cnt-=(k+1);
			k=0;
		}
		m[a[i]]=cnt;
	}
	for(int i=0;i<n;i++){
		cout<<m[t[i]]<<" ";
	}
	cout<<"\n";
	
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

