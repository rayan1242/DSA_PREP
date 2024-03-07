#include<bits/stdc++.h>
using namespace std;

void solve(int n,string s){
	int noL=0;
	int noO=0;
	for(int i=0;i<n;i++){
		if(s[i]=='L') noL+=1;
		if(s[i]=='O') noO+=1;
	}	
	if(S[0]=='L' || s[n-1]=='L' && noL!=2){
		cout<<"1"<<endl;
		return;
	}
	else if(S[0]=='O' || s[n-1]=='O' && noO!=2){
		cout<<"1"<<endl;
		return;
	}
	else{
		cout<<"-1"<<endl;
		return;
	}
}

int main(){
		int n;
		cin>>n;
		string s;
		cin>>s;
		solve(n,s);
	return 0;
}
