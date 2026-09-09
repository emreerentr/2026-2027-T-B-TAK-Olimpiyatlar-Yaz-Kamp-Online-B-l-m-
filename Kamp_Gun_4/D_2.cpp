#include <bits/stdc++.h>
using namespace std;
#define int long long
#define flag cout << "flag" << endl;

bool check(int x, vector<int>&a, int n, int k){
    int moves = 0;
    for(int i = n / 2; i < n; ++i){
        if(x - a[i] > 0)
            moves += x - a[i];
        if(moves > k) return false;
    }

    if(moves > k) return false;
    return true;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; ++i)
        cin >> a[i];
    sort(a.begin(), a.end());

    int small = 1, big = 10000000000;
    while(small != big){
        int mid = (small + big + 1)/2;
        if(check(mid, a, n, k))
            small = mid;
        else
            big = mid - 1;
    }

    cout << small << endl;
    return 0;
}