#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n%2!= 0){
            for(int i = 1; i <= n; i++){
                cout << i << " ";
            }
            
            cout<<endl;
        } else if(n%2==0) {
        	int i=0;
            int cnt = 0;
            while(i<n){
            	 cnt+= 2;
                cout << cnt << " ";
               // Increment i by 2 in each iteration
               i++;
            }
            cout<<endl;
        }
    }
    return 0;
}

