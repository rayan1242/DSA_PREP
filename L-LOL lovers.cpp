#include<bits/stdc++.h>
using namespace std;


int main(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	int L=0,O=0;
	for(int i=0;i<n;i++){
		if(s[i]=='L') L++;
		if(s[i]=='O') O++;
	}
	if(L==2 && s[0]=='L' && s[1]=='L'){
		cout<<2<<"\n";
	}
	else if(O==2 && s[0]=='O' && s[1]=='O'){
		cout<<2<<"\n";
	}
	else if(L!=2 && s[0]=='L' || s[s.size()-1]=='L'){
		cout<<1<<"\n";
	}
	else if(O!=2 && s[0]=='O' || s[s.size()-1]=='O'){
		cout<<1<<"\n";
	}	
	else if(s=="LOL" || s=="OLO" || s=="LOLO" || s=="OLOL"){
		cout<<-1<<"\n";
	}else{
		cout<<1<<"\n";
	}
	return 0;
}
