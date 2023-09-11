#include<bits/stdc++.h>
using namespace std;

long maxBeauty(string str, int k, char ch){
	long l=0,r=0;
	long ans = INT_MIN;
	int count=0;

	while(r<str.size()){
		while(r<str.size() and str[r]==ch){
			ans = max(ans,r-l+1);
			r++;
		}
		while(r<str.size() and str[r]!=ch and count<k){
			count++;
			ans = max(ans,r-l+1);
			r++;	
		}
		while( l<r and str[r]!=ch and count>=k){
			if(k==0){
				l=++r;
				break;
			}
			count-=(str[l]!=ch);
			l++;
		}	
	}

}

int main(){

	int n,k;
	cin>>n>>k;
	string str;
	cin>>str;

	long x = maxBeauty(str,k,'a');
	long y = maxBeauty(str,k,'b');
	cout<<max(x,y);
	return 0;

}