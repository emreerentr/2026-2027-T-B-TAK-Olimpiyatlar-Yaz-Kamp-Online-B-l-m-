#include <bits/stdc++.h>
using namespace std;
#define int long long
#define flag cout << "flag" << endl;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string qewerwer;
    cin >> qewerwer;
    deque<char> s;
    for(int i = 0; i < qewerwer.size(); ++i)
        s.push_back(qewerwer[i]);
    int Q;
    cin >> Q;
    while(Q--){
        int T;
        cin >> T;
        if(T == 2){
            int F;
            char C;
            cin >> F >> C;
            if(F == 1)
                s.push_front(C);
            else
                s.push_back(C);
            continue;
        }
        reverse(s.begin(), s.end());
    }
    for(char i : s)
        cout << i;
    cout << endl;

    return 0;
}