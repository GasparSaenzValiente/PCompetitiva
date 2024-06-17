#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

#define fore(i, a, b) for(ull i=a; i < b; i++)

// g++ -Wall -std=c++17 nombre_del_archivo.cpp -o nombre_del_ejecutable
// https://cses.fi/problemset/task/1090
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ull n,x;
    cin >> n >> x;

    multiset<ll> ms;  // Creamos un multiset vacío
 
    // Leer los pesos y agregarlos al multiset
    fore(j, 0, n){
        ll num;
        cin >> num;
        ms.insert(num);
    }

    int gondolas = 0; 

    while(ms.size() != 0){
        auto it = ms.end();
        --it; // obtengo el mayor elemento del ms
        ms.erase(it);
        auto r = x - *it; // Encuentro el max peso que puedo sumarle al ya encontrado

        auto rest = ms.upper_bound(r);
        if (rest != ms.begin()) { // si no apunta al ppcio, entonces hay un elemento que es <= r
            --rest;
            ms.erase(rest);
        }
        gondolas++;
    }
    cout << gondolas << endl;
    }