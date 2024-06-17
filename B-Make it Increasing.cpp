
// MY APPROACH
//	#include <bits/stdc++.h>
//	using namespace std;
//	#define int long long
//	
//	void solve(){
//		int n,flag=0,cnt=0;
//		cin>>n;
//		vector<int> a(n);
//		for(int i=0;i<n;i++){
//			cin>>a[i];
//		}
//		for(int i=n-1;i>0;i--){
//			for(int j=i-1;j>=0;j--){
//				if(a[j]>=a[i]){
//					while(a[j]>=a[i] && a[i]!=0){
//						a[j]=floor(a[j]/2);
//						cnt++;
//						if(a[j]==0 || a[i]==0){
//							break;
//						}
//					}
//					if(a[i]==0){
//							flag=1;
//							break;
//						}
//					break;
//				}		
//			}
//			if(flag){
//				break;
//			}
//		}
//		if(flag){
//			cout<<-1<<"\n";
//		}else{
//			cout<<cnt<<"\n";
//		}
//	}
//	
//	signed main() {
//	    ios::sync_with_stdio(false);
//	    cin.tie(nullptr);
//	    int T;
//	    cin >> T;
//	    while (T--)
//	        solve();
//	    return 0;
//	}

// correct approach
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n,flag=0,cnt=0;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=n-1;i>0;i--){
		for(int j=i-1;j>=0;j--){
			if(a[j]>=a[i]){
				while(a[j]>=a[i] && a[i]!=0){
					a[j]=floor(a[j]/2);
					cnt++;
					if(a[j]==0 || a[i]==0){
						break;
					}
				}
				if(a[i]==0){
						flag=1;
						break;
					}
				break;
			}		
		}
		if(flag){
			break;
		}
	}
	if(flag){
		cout<<-1<<"\n";
	}else{
		cout<<cnt<<"\n";
	}
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--)
        solve();
    return 0;
}
