#include <bits/stdc++.h>
using namespace std;
#define int long long
#define flag cout << "flag" << endl;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string org;
    cin >> org;
    string usr;
    cin >> usr;

    if(usr.size() != org.size()){
        cout << "N" << endl;
        return 0;
    }

    usr.append(usr);
    if(usr.find(org) < org.size()){
        cout << "Y" << endl;
        return 0;
    }
    cout << "N" << endl;
    return 0;
}