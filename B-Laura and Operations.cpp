#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    while (T--) {
        long long a, b, c;
        cin >> a >> b >> c;
        if(a==b && b==c){
        	cout<<1<<" "<<1<<" "<<1<<"\n";
		}else if(a==b){
			cout<<0<<" "<<0<<" "<<1<<"\n";
		}else if(b==c){
			cout<<1<<" "<<0<<" "<<0<<"\n";
		}else if(c==a){
			cout<<0<<" "<<1<<" "<<0<<"\n";
		}else if(a%2==b%2){
			if(c>=(abs(b-a)/2)){
				cout<<0<<" "<<0<<" "<<1<<"\n";
			}
		}else if(b%2==c%2){
			if(a>=(abs(c-b)/2)){
				cout<<1<<" "<<0<<" "<<0<<"\n";
			}
		}else if(a%2==c%2){
			if(b>=(abs(c-a)/2)){
				cout<<0<<" "<<1<<" "<<0<<"\n";
			}
		}else{
			cout<<0<<" "<<0<<" "<<0<<"\n";	
			}
    }

    return 0;
}

