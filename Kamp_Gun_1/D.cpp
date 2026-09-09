#include <bits/stdc++.h>
using namespace std;
#define int long long
#define flag cout << "flag" << endl;

void dfs(vector<bool>& visited, int source, vector<vector<int>>& adjlist){
    visited[source] = true;
    for(int i : adjlist[source]){
        if(!visited[i])
            dfs(visited, i, adjlist);
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N, M;
    cin >> N >> M;
    vector<vector<int>> adjlist(N+1);
    for(int i = 0; i < M; ++i){
        int u, v;
        cin >> u >> v;
        adjlist[u].push_back(v);
        adjlist[v].push_back(u);
    }

    vector<bool> visited(N+1, false);
    int count = 0;
    for(int i = 1; i <= N; ++i){
        if(!visited[i]){
            dfs(visited, i, adjlist);
            count++;
        }
    }
    cout << count << endl;

    return 0;
}