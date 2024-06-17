#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

#define fore(i, a, b) for(ull i=a; i < b; i++)

// g++ -Wall -std=c++17 nombre_del_archivo.cpp -o nombre_del_ejecutable
// https://codeforces.com/contest/4/problem/C

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    ull n;
    cin >> n;

    map<string, int> db;

    fore(i,0,n){
        string str;
        cin >> str;

        auto it = db.find(str);

        if(it == db.end() ) { // el elemento NO se encuentra en el set 
            db[str] = 1; // Insertamos el nombre por primera vez
            cout << "OK" << endl;
        }
        else{   // el elemento SI se encuentra en el set 
            cout << str << db[str] << endl; // printeo la nueva cadena
            db[str]++; // aumento la repeticion de la cadena que queriamos incluir al db
        }
    }
    return 0;    
}