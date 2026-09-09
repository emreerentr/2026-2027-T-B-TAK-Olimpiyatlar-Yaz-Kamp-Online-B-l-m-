#include <bits/stdc++.h>
using namespace std;
#define int long long
#define flag cout << "flag" << endl;

int n, k;
vector<int> turler(1009), mazlum(1009), torpilli(1009);

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> k;
    for(int i = 0; i < n; ++i){
        cin >> turler[i];
        turler[i]--;
    }
    for(int i = 0; i < k; ++i)
        cin >> mazlum[i];
    for(int i = 0; i < k; ++i)
        cin >> torpilli[i];

    int total = 0, dostturu = 0, salihturu = 1, dostcount = 0, salihcount = 0;
    for(int i = 0; i < n; ++i){
        if(turler[i] == dostturu){
            if(!dostcount){
                total += mazlum[dostturu];
                dostcount++;
                continue;
            }
            total += torpilli[dostturu];
            dostcount++;
            continue;
        }
        if(!salihcount){
            total += mazlum[salihturu];
            salihcount++;
            continue;
        }
        total += torpilli[salihturu];
        salihcount++;
        continue;
    }
    cout << total << endl;
    
    return 0;
}