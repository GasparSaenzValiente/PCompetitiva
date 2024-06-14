#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

#define fore(i, a, b) for(ull i=a; i < b; i++)

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    ull n, m, a;
    cin >> n >> m >> a;

    ull large = 0;
    ull width = 0;
    ull total = 0;

    if(m%a == 0){
        width = m/a;
    }
    else{
        width = m/a + 1;
    }

    if(n%a == 0){
        large = n/a;
    }
    else{
        large = n/a + 1;
    }
    
    total += (large * width);

    cout << total;
    }