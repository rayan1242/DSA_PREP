#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	for(int i=0;i<200000/4;i++){
		s+="aa";
		s+="bb";
	}
	int n;
	cin>>n;
	cout<<s.substr(0,n);
	return 0;
}
