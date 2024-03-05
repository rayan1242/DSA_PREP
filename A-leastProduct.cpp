#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void solve(int cnt,int flag) {
    if(flag==1){
        cout<<0<<endl;
    }
    else if(flag==0 && cnt % 2 != 0){
        cout << 0 << endl;
    }
    else if(flag==0 && cnt % 2 == 0){
        cout << 1 << endl;
        cout << 1 << " " << 0 << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, cnt = 0,flag=0,f=0;
        cin >> n;
        for(int i = 0; i < n; i++){
            int k;
            cin >> k;
            if(n==1 && k==0) {
                cout<<0<<endl;
                 f=1;
            }
            if(k < 0) cnt++;
            if(k == 0){
                flag=1;
            }
        }
        if(f!=1)
            solve(cnt,flag);
    }   
    return 0;
}

