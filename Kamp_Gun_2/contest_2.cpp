#include <bits/stdc++.h>
using namespace std;
#define int long long
#define flag cout << "flag" << endl;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string sss;
    cin >> sss;
    deque<char> s;
    for(int i = 0; i < sss.size(); ++i)
        s.push_back(sss[i]);
    int Q;
    cin >> Q;

    vector<char> a, b;
    int sign = 0;
    
    while(Q--){
        int T;
        cin >> T;
        if(T == 2){
            int F;
            char C;
            cin >> F >> C;
            if(F == 1)
                a.push_back(C);
            else
                b.push_back(C);
            continue;
        }
        sign++;
        swap(a, b);
    }
    for(char i : a)
        cout << i;
    for(char i : s)
        cout << i;
    for(char i : b)
        cout << i;
    cout << endl;

    return 0;
}