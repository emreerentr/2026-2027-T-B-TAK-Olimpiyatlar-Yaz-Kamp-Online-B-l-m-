#include <bits/stdc++.h>
using namespace std;
#define int long long
#define flag cout << "flag" << endl;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int q;
    cin >> q;

    while(q--){
        int coders, mathers, unemployed;
        cin >> coders >> mathers >> unemployed;
        cout << min({coders, mathers, (coders + mathers + unemployed) / 3}) << endl;
    }

    return 0;
}