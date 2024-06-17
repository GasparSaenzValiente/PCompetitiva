#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

#define fore(i, a, b) for(ull i = a; i < b; i++)

// g++ -Wall -std=c++17 nombre_del_archivo.cpp -o nombre_del_ejecutable
// https://codeforces.com/contest/903/problem/C
int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    ull n;
    cin >> n;

    vector<ll> v(n);
    for (ll& num : v) {
        cin >> num;
    }

    // Ordenar los números en orden ascendente
    sort(v.begin(), v.end());

    // Vector para rastrear el último elemento de cada grupo
    vector<ll> groups;

    // Procesar los números en orden ascendente
    for (ll number : v) {
        bool added = false;
        // Intentar agregar el número a uno de los grupos existentes
        for (auto& group : groups) {
            if (number > group) {
                group = number;
                added = true;
                break;
            }
        }
        // Si no se pudo agregar a ningún grupo, crear un nuevo grupo
        if (!added) {
            groups.push_back(number);
        }
    }

    // El número de grupos es la respuesta
    cout << groups.size() << endl;

    return 0;
}
