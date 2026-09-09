#include <bits/stdc++.h>
using namespace std;
#define int long long
#define flag cout << "flag" << endl;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string ss;
    cin >> ss;
    deque<char> s;
    for(char i : ss)
        s.push_back(i);
    int Q, front = 0, count = 0;
    cin >> Q;
    while(Q--){
        int T;
        cin >> T;
        if(T == 1){
            count++;
            front = !front;
            continue;
        }
        int F;
        char C;
        cin >> F >> C;
        if(F == 1){
            if(!front)
                s.push_front(C);
            else
                s.push_back(C);
        }
        else{
            if(!front)
                s.push_back(C);
            else
                s.push_front(C);
        }
    }
    if(count&1)
        reverse(s.begin(), s.end());
    for(char i : s)
        cout << i;
    cout << endl;

    return 0;
}