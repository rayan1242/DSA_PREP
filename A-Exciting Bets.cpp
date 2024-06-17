#include<bits/stdc++.h>
using namespace std;

void solve(){
	long long a,b,cnt1=0,cnt2=0;
	cin>>a>>b;
	if(a==b){
		cout<<0<<" "<<0<<"\n";
	}else{
		int diff=abs(a-b);
		if(a%diff==0 && b%diff==0){
			cout<<diff<<" "<<0<<"\n";
		}else{
			while(a%diff!=0 && b%diff!=0){
				a++;
				b++;
				cnt1++;
		}
		while(a%diff!=0 && b%diff!=0 && a>0 && b>0){
				a++;
				b++;
				cnt2--;
		}
		if(cnt1==0 && cnt2!=0) cout<<diff<<" "<<cnt2<<"\n";
		else if(cnt1!=0 && cnt2==0) cout<<diff<<" "<<cnt1<<"\n";
		else if(cnt1!=0 && cnt2!=0){
			cout<<diff<<" "<<min(cnt1,cnt2)<<"\n";	
		}
			
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

