#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, k, f = 0;
    cin >> n >> k;
    vector<int> a(n);
    vector<int> x(n);
    vector<pair<int,int>> p;

    // Read monster health and positions
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        cin >> x[i];
    }
    for(int i=0;i<n;i++){
    	p.push_back(make_pair(x[i], a[i])); // Sort based on position
	}

    // Sort monsters based on their positions
    sort(p.begin(), p.end());

    for(int i = 0; i < n; i++){
        int curr_health = p[i].second; // Get health from sorted vector
        int cnt = 0, rem = 0;

        // Calculate how many bullets needed to kill monsters with the same health
        while(i < n && p[i].first == p[i + 1].first){
            cnt += p[i].second;
            i++;
        }

        // Check if it's possible to kill all monsters with current health
        if(cnt > rem + abs(curr_health) * k){
            cout << "NO" << "\n";
            f = 1;
            break;
        }

        // Update remaining bullets after killing monsters
        rem = (rem + abs(curr_health) * k) - cnt;

        // Update positions of remaining monsters
        for(int j = 0; j < n; j++){
            if(p[j].first > 0) p[j].first--;
            if(p[j].first < 0) p[j].first++;
        }
    }
    if(!f) cout << "YES" << "\n";
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

