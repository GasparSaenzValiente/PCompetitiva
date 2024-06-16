#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

#define fore(i, a, b) for(ull i=a; i < b; i++)

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    ull n, a, b, c, r, fr;
    cin >> n;
    fr = 0;
    fore(i, 0, n){
        cin >> a >> b >> c;
        r = 0;

        r = a + b;
        r += c;

        if(r >= 2){
            fr++;
        }  
    }

    cout << fr;
    }