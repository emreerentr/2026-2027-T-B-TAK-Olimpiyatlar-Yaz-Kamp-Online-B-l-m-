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
    int Q;
    cin >> Q;
    vector<char> a, b;
    int which_is_front = 0;
    while(Q--){
        int T;
        cin >> T;
        if(T == 1){
            swap(a, b);
            reverse(a.begin(), a.end());
            reverse(b.begin(), b.end());
            continue;
            which_is_front = !which_is_front;
        }
        int F;
        char C;
        cin >> F >> C;
        if(F == 1)
            a.push_back(C);
        else
            b.push_back(C);
    }
    if(!which_is_front){
        for(char i : a)
            cout << i;
    }
    else{
        for(char i : b)
            cout << i;
    }
    for(char i : s)
        cout << i;
    if(!which_is_front){
        for(char i : b)
            cout << i;
    }
    else{
        for(char i : a)
            cout << i;
    }
    
    cout << endl;

    return 0;
}