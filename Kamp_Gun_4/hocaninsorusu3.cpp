#include <bits/stdc++.h>
using namespace std;
#define int long long
#define flag cout << "flag" << endl;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, K;
    cin >> n >> K;
    vector<int> a(n);
    for(int i = 0; i < n; ++i)
        cin >> a[i];
    
    /*for(int i = 0; i < n; ++i){ //brute force
        for(int j = i+1; j < n; ++j){
            for(int k = j+1; k < n; ++k){
                if(a[i] + a[j] + a[k] == K){
                    cout << a[i] << " " << a[j] << " " << a[k] << endl;
                    return 0;
                }
            }
        }
    }*/

    /*
        özyinelemeli complete search 
        Bir yola gir o yoldaki tüm ihtimalleri dene
        olmazsa bir adım geri dön ve başka bir yol dene
    */

    cout << -1 << endl;

    return 0;
}
