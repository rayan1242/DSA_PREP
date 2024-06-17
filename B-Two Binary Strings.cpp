#include<bits/stdc++.h>
using namespace std;

void solve(){
	string a;
	cin>>a;
	string b;
	cin>>b;
	int fi,li,fir0,lir0,fir1,lir1;
	for(int i=0;i<a.size();i++){
		if(a[i]!=b[i]){
			fi=i;
		}
	}
	for(int i=a.size()-1;i>=0;i--){
		if(a[i]!=b[i]){
			li=i;
		}
	}
	if(li==fi){
		int f=0;
		for(int i=fi;i<a.size();i++){
			if(a[i]=='0' && b[i]=='0'){
				f=1;
				cout<<"YES"<<"\n";
			}
		}
		for(int i=fi;i>=0;i--){
			if(a[i]=='1' && b[i]=='1' && f==0){
				f=1;
				cout<<"YES"<<"\n";
			}
		}
		if(f==0){
			cout<<"NO"<<"\n";
		}
	}
	if(li!=fi){
		int f=0,flag=0,f2=0;
		for(int i=fi;i<a.size();i++){
			if(a[i]=='0' && b[i]=='0'){
				fir0=i;
				f=1;
				f2=1;
				break;
			}
		}
		for(int i=li;i>=0;i--){
			if(a[i]=='0' && b[i]=='0'){
				lir0=i;
				f=1;
				f2=1;
				break;
			}
		}
		if(lir0>=fir0 && f==1){
			cout<<"YES"<<"\n";
			flag=1;
		}
		for(int i=li;i>=0;i--){
			if(a[i]=='1' && b[i]=='1'){
				lir1=1;
				f=1;
				f2=2;
				break;
			}
		}
		for(int i=fi;i<a.size();i++){
			if(a[i]=='1' && b[i]=='1'){
				fir1=i;
				f=1;
				f2=2;
				break;
			}
		}
		if(fir1>=lir1 && f==1 && flag==0){
			cout<<"YES"<<"\n";
			flag=1;
		}
		if(!(lir0>=fir0) && !(fir1>=lir1) && f2==2 && flag==0){
			if(fir0>fir1 && lir0>lir1){
				cout<<"NO"<<"\n";
				flag=1;
			}
		}
		if(flag==0){
			cout<<"NO"<<"\n";
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

