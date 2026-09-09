#include <bits/stdc++.h>
using namespace std;
#define int long long
#define flag cout << "flag" << endl;

int solution(int n){
    int mul = 1;
    for(int i = 1; i < n; ++i){
        mul *= 2;
        mul %= 1000000007;
    }
    return mul;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    if(n <= 6) cout << solution(n) << endl;
    else cout << (n / 6) * solution(6) + solution(n % 6);

    return 0;
}