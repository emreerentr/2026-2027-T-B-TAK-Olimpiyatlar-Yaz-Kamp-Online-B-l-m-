#include <bits/stdc++.h>
using namespace std;
#define int long long
#define flag cout << "flag" << endl;

int findmissing(vector<int> a, int n){
    sort(a.begin(), a.end());
    for(int i = 0; i < n - 1; ++i){
        if(a[i] != a[i+1] - 1){
            return a[i] + 1;
        }
    }
    return a[0] - 1;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; ++i)
        cin >> a[i];
    cout << findmissing(a, n) << endl;

    return 0;
}