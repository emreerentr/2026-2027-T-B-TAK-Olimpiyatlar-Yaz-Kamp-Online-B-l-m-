#include <bits/stdc++.h>
using namespace std;
#define int long long
#define flag cout << "flag" << endl;

vector<bool> reachable(100009);

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n);
    int total = 0;
    for(int i = 0; i < n; ++i){
        cin >> a[i];
        total += a[i];
    }
    reachable[0] = true;
    for(int i = 0; i < n; ++i){
        for(int j = total; j >= a[i]; --j){
            if(reachable[j - a[i]]){
                reachable[j] = true;
            }
        }
    }
    int count = 0;
    for(int i = 0; i <= total; ++i){
        if(i && reachable[i]) count++;
    }
    cout << count << endl;
    for(int i = 0; i <= total; ++i){
        if(reachable[i] && i) cout << i << " ";
    }
    cout << endl;

    return 0;
}