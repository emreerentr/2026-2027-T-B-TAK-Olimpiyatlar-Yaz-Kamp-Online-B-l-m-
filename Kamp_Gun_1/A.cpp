#include <bits/stdc++.h>
using namespace std;
#define int long long
#define flag cout << "flag" << endl;

int N, X;
vector<vector<int>> dp(105, vector<int>(10005));

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> N >> X;
    vector<int> a(N), b(N);
    for(int i = 0; i < N; ++i)
        cin >> a[i] >> b[i];
    dp[0][0] = 1;
    for(int i = 0; i <= N; ++i){
        for(int j = 0; j <= X; ++j){
            if(!i && j){
                dp[i][j] = 0;
                continue;
            }
            if(dp[i][j] == 1){
                if(j + a[i] <= X)
                    dp[i+1][j + a[i]] = 1;
                if(j + b[i] <= X)
                    dp[i+1][j + b[i]] = 1;
            }
        }
    }
    cout << (dp[N][X] ? "Yes" : "No") << endl;

    return 0;
}