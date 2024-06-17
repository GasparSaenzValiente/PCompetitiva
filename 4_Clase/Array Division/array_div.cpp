#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

#define fore(i, a, b) for(ull i=a; i < b; i++)

// g++ -Wall -std=c++17 nombre_del_archivo.cpp -o nombre_del_ejecutable
// https://cses.fi/problemset/task/1085


bool canBeMax(const vector<ll>& v, ll n, ll k, ll M) {
    ll segments = 1;
    ll sum = 0;
    bool can = true;
    for (ll i = 0; i < n && can; i++) {
        if (v[i] > M) {
            can = false;
        } else if (sum + v[i] > M) {
            sum = v[i];
            segments++;
            if (segments > k) {
                can = false;
            }
        } else {
            sum += v[i];
        }
    }
    return can;
}



int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    ull n, k;
    cin >> n >> k;
    vector<ll> v(n);

    ll max_n = 0;
    ll sum_n = 0;
    // la respuesta tiene que ser >= que el max elemento del arreglo, y como maximo puede ser la suma de todos los elementos

    for (auto& num : v) {
        cin >> num;
        max_n = max(max_n, num);
        sum_n += num;
    }

    // plantear binary search

    ll left = max_n; 
    ll right = sum_n; 
    
    while (left < right) {
        ll mid = (left + right) / 2;
        if (canBeMax(v, n, k, mid)) {
            right = mid; // mid es un candidato válido para la mediana
        } else {
            left = mid + 1; // mid no es válido, reducimos el rango de búsqueda
        }
    }

    cout << right << endl;
}

/*
2 4 7 3 5
[2 4 7] [3] [5]
[2][4 7 3][5]
[2][4 7][3 5]
[2][4][7 3 5]
*/