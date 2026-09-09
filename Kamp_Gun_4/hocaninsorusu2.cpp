#include <bits/stdc++.h>
using namespace std;
#define int long long
#define flag cout << "flag" << endl;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string str;
    cin >> str;
    string strresult;
    str.push_back('-');
    int count = 1;
    for(int i = 1; i < str.size(); ++i){
        if(str[i] != str[i-1]){
            strresult.push_back(str[i-1]);
            strresult.push_back(count + '0');
            count = 1;
        }
        else
            count++;
    }
    cout << strresult;

    return 0;
}