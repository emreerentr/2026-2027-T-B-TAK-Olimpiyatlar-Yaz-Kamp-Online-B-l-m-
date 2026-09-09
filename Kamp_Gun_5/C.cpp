#include <bits/stdc++.h>
using namespace std;
#define int short
#define flag cout <<"flag" << endl;

int maxsum;
vector<int> allsums;
vector<bool> sumvisited(100009);
int pairvisited[100][100009];

void recursive(vector<int>& a, int index, int cursum){
    if(pairvisited[index][cursum]) return;
    pairvisited[index][cursum]= true;
    if(!sumvisited[cursum + a[index]]){
        allsums.push_back(cursum + a[index]);
        sumvisited[cursum + a[index]] = true;
    }
    for(int i = index + 1; i < a.size(); ++i){
        recursive(a, i, cursum);
    }
    cursum += a[index];
    for(int i = index + 1; i < a.size(); ++i){
        recursive(a, i, cursum);
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; ++i)
        cin >> a[i];
    
    recursive(a, 0, 0);
    sort(allsums.begin(), allsums.end());
    cout << allsums.size() << endl;
    for(int i : allsums){
        if(i) cout << i << " ";
    }
    cout << endl;

    return 0;
}