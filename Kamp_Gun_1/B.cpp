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

    vector<int> bolenler;
    for(int i = 1; i*i <= N; ++i){
        if(N % i == 0){
            bolenler.push_back(i);
            bolenler.push_back(N/i);
        }
    }
    sort(bolenler.begin(), bolenler.end());
    int i = bolenler[bolenler.size() / 2], j = bolenler[bolenler.size() / 2 - 1];
    cout << (i - 1) + (j - 1) << endl;

    return 0;
}