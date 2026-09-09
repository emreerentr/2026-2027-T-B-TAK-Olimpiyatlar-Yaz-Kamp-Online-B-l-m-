#include <bits/stdc++.h>
using namespace std;
#define int long long
#define flag cout << "flag" << endl;

vector<int> turler(1009), mazlum(1009), torpil(1009);
int n, k;

int dp(int index, int salihson, int dostson, int total){
    if(index == n - 1){
        int dostalsin, salihalsin;
        if(dostson != turler[index]) dostalsin = mazlum[turler[index]] + total;
        else dostalsin = torpil[turler[index]] + total;

        if(salihson != turler[index]) salihalsin = mazlum[turler[index]] + total;
        else salihalsin = torpil[turler[index]] + total;

        return min(dostalsin, salihalsin);
    }

    int dostalsin, salihalsin;
    if(dostson != turler[index]) dostalsin = dp(index+1, salihson, turler[index], total + mazlum[turler[index]]);
    else dostalsin = dp(index+1, salihson, turler[index], total + torpil[turler[index]]);

    if(salihson != turler[index]) salihalsin = dp(index+1, turler[index], dostson, total + mazlum[turler[index]]);
    else salihalsin = dp(index+1, turler[index], dostson, total + torpil[turler[index]]);

    return min(dostalsin, salihalsin);
}

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
        cin >> torpil[i];
    cout << dp(0, -1, -1, 0) << endl;

    return 0;
}