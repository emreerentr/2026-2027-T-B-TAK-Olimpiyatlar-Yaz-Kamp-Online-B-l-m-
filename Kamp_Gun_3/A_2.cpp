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
        int n;
        cin >> n;
        string scomp;
        cin >> scomp;
        int m = 1, cur = 1;
        for(int i = 1; i < n; ++i){
            if(scomp[i] == scomp[i-1])
                cur++;
            else{
                cur = 1;
                continue;
            }
            if(cur > m) m = cur;
        }
        cout << m + 1 << endl;
    }

    return 0;
}