#include <bits/stdc++.h>
using namespace std;
#define int long long
#define flag cout << "flag" << endl;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, k;
    cin >> n >> k;

    int needed = 0;
    vector<int> a(n);
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int m = a[a.size() - 1];
    for(int i : a)
        needed += (m - i);
    if(k < needed){
        int median = a[a.size()/2];
        cout << median + k << endl;
        return 0;
    }
    else if(k == needed){
        cout << m << endl;
        return 0;
    }
    k -= needed;
    cout << m + k << endl;

    return 0;
}