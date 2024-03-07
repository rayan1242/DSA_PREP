#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>& v,int n){
	int m= *max_element(v.begin(),v.end());
	if(m==0){
		m=1;
	}
	set<int> s(v.begin(),v.end());
	int findMex=0;
	bool found=false;
	while (findMex <= m) {
        if (s.find(findMex) == s.end()) {
            break;
        }
        findMex++;
    }
    if (findMex > m) {
        cout << -1 << "\n";
        }else{
		cout<<n<<"\n";
		for(int i=1;i<=n;i++){
			cout<<i<<i<<"\n";
		}
	}
	
}	

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
        	cin>>v[i];
		}
        solve(v,n);
    }
}

