#include <bits/stdc++.h>
using namespace std;
#define int long long
#define flag cout << "flag" << endl;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;

    while(t--){
        int n, m;
        cin >> n >> m;
        vector<vector<int>> adjlist(n+1);
        for(int i = 0; i < m; ++i){
            int u, v;
            cin >> u >> v;
            adjlist[u].push_back(v);
            adjlist[v].push_back(u);
        }
        set<int> degrees;
        for(int i = 1; i <= n; ++i)
            degrees.insert(adjlist[i].size());
        
        if(degrees.size() == 1){
            cout << "1 0" << endl;
            continue;
        }
        if(degrees.size() == 2){
            priority_queue<int> pq;
            for(int i : degrees)
                pq.push(i);
            
        }
    }

    return 0;
}