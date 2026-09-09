#include <bits/stdc++.h>
using namespace std;
#define int long long
#define flag cout << "flag" << endl;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m;
    cin >> n;
    cin >> m;
    vector<int> a(m);
    for(int i = 0; i < m; ++i){
        cin >> a[i];
    }
    int l = 0, r = 0, total = 0, min = 0;
    while(r < m){
        total = r;
        while(total < n){
            total += a[r];
            r++;
        }
        while(total >= n){
            total -= a[l];
            l++;
        }
        
    }

    return 0;
}