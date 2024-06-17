#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n,flag=1;
	cin>>n;
	int maxi=INT_MIN;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
		maxi=max(a[i],maxi);
	}
	for(int i=0;i<n;i++){
		if(a[i]==maxi && flag){
			continue;
			flag=0;
		}
		maxi&=a[i];		
	}
	cout<<maxi<<"\n";
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

