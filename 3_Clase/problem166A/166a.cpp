#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

#define fore(i, a, b) for(ull i=a; i < b; i++)

// g++ -Wall -std=c++17 nombre_del_archivo.cpp -o nombre_del_ejecutable

bool compare(const pair<ll, ll>& a, const pair<ll, ll>& b) {
    if (a.first != b.first)
        return a.first > b.first; // Primero, ordena por número de problemas resueltos (descendente)
    return a.second < b.second;   // Si empatan, ordena por tiempo de penalización (ascendente)
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int n, k;
    cin >> n >> k;

    vector<pair<ll, ll>> teams(n);
    for(pair<ll, ll>&team : teams){
        cin >> team.first >> team.second;
    }

    // Ordenar los equipos
    sort(teams.begin(), teams.end(), compare);

    pair<ll, ll> kth_team = teams[k-1];

    int count = 0;
    for(pair<ll,ll> team : teams){
        if (team == kth_team){
            count++;
        }
    }

    cout << count << endl;
    }