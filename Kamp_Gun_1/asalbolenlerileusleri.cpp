#include <bits/stdc++.h>
using namespace std;
#define int long long
#define flag cout << "flag" <<endl;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    vector<pair<int, int>> asal_bolenler;
    for(int i = 2; i*i <= n; ++i){ //O(sqrt(n))
        int sayac = 0;
        while(n % i == 0){
            n /= i;
            sayac++;
        }
        if(sayac) asal_bolenler.push_back({i, sayac});
    }
    if(n != 1) asal_bolenler.push_back({n, 1});
    for(auto go : asal_bolenler){
        cout << go.first << " " << go.second << endl;
    }
    cout << endl;

    return 0;
}