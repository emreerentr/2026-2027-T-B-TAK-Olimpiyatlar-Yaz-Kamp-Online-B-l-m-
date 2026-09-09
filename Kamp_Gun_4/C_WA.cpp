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
        int c, m, u;
        cin >> c >> m >> u;
        if(!c || !m){
            cout << "0" << endl;
            continue;
        }
        int total = 0;
        bool f = false;
        while(u){
            if(!c || !m){
                cout << total << endl;
                f = true;
                break;
            }
            c--;
            m--;
            u--;
            total++;
        }
        if(f)
            continue;
        while(c && m){
            if(c < m && c >= 1 && m >= 2){
                m -= 2;
                c--;
                total++;
                continue;
            }
            else{
                if(c >= 2 && m >= 1){
                    c -= 2;
                    m--;
                    total++;
                    continue;
                }
            }
        }
        cout << total << endl;
    }
    return 0;
}