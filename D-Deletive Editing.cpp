#include <iostream>
#include <unordered_set>
#include <string>
#include<bits/stdc++.h>
using namespace std;

void solve() {
    int f = 1;
    string l, k,temp="";
    cin >> l >> k;
    vector<int> v(26,0);
    for(int i=0;i<k.size();i++) v[k[i]-'A']++;
    for(int i=l.size()-1;i>=0;i--){
    	if(v[l[i]-'A']){
    		temp+=l[i];
    		v[l[i]-'A']--;
		}
	}
	reverse(temp.begin(),temp.end());
	if(temp==k){
		cout<<"YES"<<"\n";
	}else{
		cout<<"NO"<<"\n";
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

