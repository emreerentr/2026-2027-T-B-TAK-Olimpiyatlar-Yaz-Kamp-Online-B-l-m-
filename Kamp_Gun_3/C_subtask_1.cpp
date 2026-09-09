#include <bits/stdc++.h>
using namespace std;
#define int long long
#define flag cout << "flag" << endl;

#define MAYBE 0
#define NO 1
#define YES 2

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<int> state(n+1, MAYBE);
    int maybecount = 0, nocount = maybecount, yescount = nocount;

    while(k--){
        int ki;
        cin >> ki;
        int kii;
        cin >> kii;
        int kiii;
        cin >> kiii;
        if(kiii == 1){
            state[kii] = YES;
            continue;
        }
        state[kii] = NO;
    }
    for(int i = 1; i <= n; ++i){
        int t = state[i];
        if(t == NO)
            nocount++;
        else if(t == YES)
            yescount++;
        else
            maybecount++;
    }

    cout << maybecount << " " << nocount << " " << yescount << endl;
    return 0;
}