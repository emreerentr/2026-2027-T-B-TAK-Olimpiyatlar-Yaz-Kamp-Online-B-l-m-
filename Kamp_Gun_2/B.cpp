#include <bits/stdc++.h>
using namespace std;
#define int long long
#define flag cout << "flag" << endl;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; ++i)
        cin >> a[i];
    
    for(int i = 0; i < n; ++i){
        if(a[i] >= 0)
            a[i] = -a[i]-1;
    }
    if(n % 2){
        int min_index = 0;
        for(int i = 1; i < n; ++i){
            if(a[i] < a[min_index])
                min_index = i;
        }
        a[min_index] = -a[min_index]-1;
    }

    int prod = 1;
    for(int i : a)
        cout << i << " ";
    cout << endl;

    return 0;
}