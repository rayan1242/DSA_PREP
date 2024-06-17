#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n,f=1,mex=INT_MIN,flag=1;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	set<int> t(a.begin(),a.end());
	
	for(int i=0;i<n;i++){
		if(a[i]!=i){
			mex=i;
			f=0;
			break;
		}
	}
	vector<int>v;
	v.push_back(0);
	if(f){
		cout<<-1<<"\n";
	}else{
		int k=0;
		for(int i=0;i<n;i++){
			if(k<mex){
				k++;
				continue;
			}
			if(k==mex){
				if(i!=0) 
					v.push_back(i);
				k=0;
			}
		}
		if(v[0]==0 && v[v.size()-1]==n-1){
				cout<<-1<<"\n";
			}
		else{
			cout<<"\n";
		for(int i=0;i<v.size()-1;i++){
			cout<<v[i]+1<<" "<<v[i+1]<<"\n";
		}
		if(v[v.size()-1]<n && flag){
			cout<<v[v.size()-1]+1<<" "<<n<<"\n";
		}
		cout<<"\n";
		
		
		
		
		
		
		
		
			
		}
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

