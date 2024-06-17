#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n,cnt=0;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int x;
	for(int i=n-1;i>=0;i--){
		if(a[i]<a[i-1]){
			x=a[i];
			break;
		}
	}
	for(int i=n-1;i>=0;i--){
		while(a[i]<a[i-1]){
		    x=floor(a[i-1]/2.0);
		    a[i-1]=a[i-1]-floor(a[i-1]/2.0);
		    cnt++;
		}
	}
	cout<<cnt<<"\n";
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

