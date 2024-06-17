#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
 
#define fore(i, a, b) for(ull i=a; i < b; i++)
 
// g++ -Wall -std=c++17 nombre_del_archivo.cpp -o nombre_del_ejecutable
// https://cses.fi/problemset/task/1091

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    ull n,m;
    cin >> n >> m;
 
    multiset<ll> ms;  // Creamos un multiset vacío
 
    // Leer los precios y agregarlos al multiset
    fore(j, 0, n){
        ll num;
        cin >> num;
        ms.insert(num);
    }
 
 
    fore(i,0,m){
        ull t;
        cin >> t;
 
        auto it = ms.upper_bound(t);
        // upper bound me da un puntero al menor elemento tal que ese elemento es mayor estricto que t
        // es decir, el numero anterior a t cumple que es menor o igual a t
 
        // Si it no está al principio, retroceder para obtener el mayor valor <= x
        if (it != ms.begin()) {
            --it;
            cout << *it << endl;
            ms.erase(it);
        }
        else{
            // si esta apuntando al ppcio, no hay elementos menores o iguales
            cout << -1 << endl;
        }
    }
 
    return 0;
    }