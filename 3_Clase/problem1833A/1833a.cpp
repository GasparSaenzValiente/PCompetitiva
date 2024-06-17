#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

#define fore(i, a, b) for(ull i=a; i < b; i++)

// g++ -Wall -std=c++17 nombre_del_archivo.cpp -o nombre_del_ejecutable
// https://codeforces.com/contest/1833/problem/A
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    ull n;
    cin >> n;

    fore(i,0,n){
        set<string> C;
        
        ull len;
        string str;
        cin >> len >> str;

        fore(j, 0, len-1){
            string melody = str.substr(j,2);
            C.insert(melody);
        }
        
        cout << C.size() << endl;
    }

    return 0;
    }