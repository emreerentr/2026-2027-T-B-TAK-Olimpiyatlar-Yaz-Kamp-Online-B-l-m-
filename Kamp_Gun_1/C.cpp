#include <bits/stdc++.h>
using namespace std;
#define int long long
#define flag cout << "flag" << endl;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;
    cin >> N;
    priority_queue<int> a;
    for(int i = 0; i < N; ++i){
        int t;
        cin >> t;
        a.push(t);
    }

    int A = 0, B = A, turn = 0;
    while(!a.empty()){
        if(!turn)
            A += a.top();
        else
            B += a.top();
        a.pop();
        turn = !turn;
    }
    cout << A - B << endl;

    return 0;
}