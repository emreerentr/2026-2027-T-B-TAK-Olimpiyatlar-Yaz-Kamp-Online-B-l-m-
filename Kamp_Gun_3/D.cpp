#include <bits/stdc++.h>
using namespace std;
#define int long long
#define flag cout << "flag" << endl;

vector<int> memo(200007, -1);
vector<vector<int>> children(200007);
int n;
int dp(int x){
    int total = 0;
    for(int i : children[x]){
        if(memo[i] == -1)
            total += dp(i);
        else
            total += memo[i];
        total++;
    }
    return memo[x] = total;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;
    for(int i = 2; i <= n; ++i){
        int a;
        cin >> a;
        children[a].push_back(i);
    }
    int one = dp(1);
    cout << one << " ";
    for(int i = 2; i <= n; ++i){
        cout << memo[i] << " ";
    }
    cout << endl;

    return 0;
}