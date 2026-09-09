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
        while(m--){
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
            vector<int> dv;
            for(int i : degrees)
                dv.push_back(i);
            int max;
            if(dv[0] > dv[1]) max = dv[0];
            else max = dv[1];

            int x = max, y = max - 1;
            cout << x << " " << y;
            continue;
        }
        map<int, pair<vector<int>, int>> mp;
        for(int i = 1; i <= n; ++i){
            mp[adjlist[i].size()].first.push_back(i);
            mp[adjlist[i].size()].second++;
        }
        int center;
        for(auto go : mp){
            if(go.second.first.size() == 1){
                center = go.second.first[0];
                break;
            }
        }
        int x = adjlist[center].size(), y = adjlist[adjlist[center][0]].size()-1;
        cout << x << " " << y << endl;
    }

    return 0;
}