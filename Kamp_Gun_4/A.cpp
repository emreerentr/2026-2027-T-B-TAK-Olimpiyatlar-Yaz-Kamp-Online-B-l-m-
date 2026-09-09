#include <bits/stdc++.h>
using namespace std;
#define flag cout << "flag" << endl;

int n1, n2, k1, k2;
int memo[101][101][11][11];

#define modulo 100000000

long long dp(int np, int np2, int kp, int kp2){
    if(memo[np][np2][kp][kp2] != -1)
        return memo[np][np2][kp][kp2] % modulo;
    if(!np && !np2)
        return memo[0][0][kp][kp2] = 1;

    if(kp == 0){
        if(kp2 == 0) return 0;
        if(np2 == 0) return 0;
        return memo[np][np2-1][k1][kp2-1] = dp(np, np2-1, k1, kp2-1);
    }
    if(kp2 == 0){
        if(kp == 0) return 0;
        if(np == 0) return 0;
        return memo[np-1][np2][kp-1][k2] = dp(np-1, np2, kp-1, k2);
    }
    if(np == 0)
        return memo[np][np2-1][k1][kp2-1] = dp(np, np2-1, k1, kp2-1);
    if(np2 == 0)
        return memo[np-1][np2][kp-1][k2] = dp(np-1, np2, kp-1, k2);

    memo[np-1][np2][kp-1][k2] = dp(np-1, np2, kp-1, k2) % modulo;
    memo[np][np2-1][k1][kp2-1] = dp(np, np2-1, k1, kp2-1) % modulo;
    return memo[np][np2-1][k1][kp2-1] + memo[np-1][np2][kp-1][k2];
}

signed main(){
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    memset(memo, -1, (size_t)(101 * 101 * 11 * 11 * sizeof(int)));

    cin >> n1 >> n2 >> k1 >> k2;
    cout << dp(n1, n2, k1, k2) % modulo << endl;

    return 0;
}