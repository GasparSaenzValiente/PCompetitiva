#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

#define fore(i, a, b) for(ull i=a; i < b; i++)

// g++ -Wall -std=c++17 nombre_del_archivo.cpp -o nombre_del_ejecutable
// https://codeforces.com/contest/1201/problem/C

bool canBeMedian(vector <ll> v, ll n, ll k, ll M){
    // me fijo si la cantidad de operaciones que necesito para llegar a la mediana M, es menor que 
    // las operaciones que tengo (k).
    ll required_ops = 0;
    for(ll i = n/2; i < n;i++){
        if(v[i] < M){
            required_ops += M - v[i];
        }
        if(required_ops > k){
            return false;
        }
    }

    return required_ops <= k;
}


int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    ull n, k;
    cin >> n >> k; 

    vector<ll> v(n);
    for(auto& num : v){
        cin >> num;
    }

    sort(v.begin(), v.end());


    // Búsqueda binaria para encontrar la máxima mediana posible
    ll left = v[n / 2]; // La mediana actual del array ordenado
    ll right = v[n / 2] + k;  // El valor máximo que la mediana puede alcanzar después de k incrementos

    while (left < right) {
        ll mid = (left + right + 1) / 2; // sumo 1 para que no se cree el bucle infinito si left y right son consecutivos
        if (canBeMedian(v, n, k, mid)) {
            left = mid; // mid es un candidato válido para la mediana
        } else {
            right = mid - 1; // mid no es válido, reducimos el rango de búsqueda
        }
    }

    cout << left << endl;

    }


/*
[1,2,3,4,5]

k = 1
[1,2,4,4,5]

k = 2
[1,2,4,5,5]

k = 3
[1,2,5,5,5]

k = 4
[1,2,5,5,6]

k = 5
[1,2,5,6,6]

k = 6
[1,2,6,6,6]
*/