#include <bits/stdc++.h>
using namespace std;
#define int long long
#define flag cout <<"flag" <<endl;

/*bool asalmidegilmi(int n){ //O(sqrt(n))
    for(int i = 2; i*i <= n; ++i){
        if(n%i == 0)
            return false;
    }
    return true;
}*/

bool asalmi[1000005];
int n;
vector<int> asal_bolenler;
vector<int> bolenler[1000005];

inline void eratosthenes(){ //O(n * log(log(n)))
    for(int i = 2; i <= n; ++i)
        asalmi[i] = true;
    for(int p = 2; p <= n; ++p){
        //1'den n'e kadar hangi sayılar asal onu bilmek istiyorum
        if(asalmi[p] == false) //bu if satırını silersek
            continue;          // O(n * log(n))de çalışır
        /*for(int i = p * 2; i <= n; i += p)  
            asalmi[i] = false;*/
        /*if(n % p == 0)
            asal_bolenler.push_back(p);*/
        for(int i = p * p; i <= n; i += p){
            asalmi[i] = false;
        }
    }
}

inline void asalbolenler(){ //eratosthenes ile aynı
    for(int i = 2;  i <= n; ++i)asalmi[i] = true;
    for(int p = 2; p <= n; ++p){
        if(asalmi[p] == false) continue;
        for(int i = p; i <= n; i += p){
            bolenler[i].push_back(p);
            if(i != p) asalmi[i] = false;
        }
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;
    eratosthenes();
    /*for(int i = 1; i<= n; ++i){
        cout <<i <<": ";
        if(asalmi[i])
            cout <<"asalmis" <<endl;
        else
            cout <<"asal degilmis" <<endl;
    }*/
    for(int i : asal_bolenler)
        cout << i << " ";
    cout << endl;
    
    /*vector<int> bolenler;
    for(int i = 1; i*i <= n; ++i){ //O(sqrt(n))
        if(n % i == 0){
            bolenler.push_back(i);
            if(i*i == n) continue;
            bolenler.push_back(n/i);
        }
    }
    sort(bolenler.begin(), bolenler.end());*/

    return 0;
}