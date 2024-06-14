#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

#define fore(i, a, b) for(ull i=a; i < b; i++)

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int X, n;
    
    cin >> n;
    X = 0;

    for (int i = 0; i < n; i++) {
        string operation; 
        cin >> operation; 

        if (operation[1] == '+') {
            X++;
        } else {
            X--;
        }
    }

    cout << X;
    }