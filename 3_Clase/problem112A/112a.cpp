#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

#define fore(i, a, b) for(ull i=a; i < b; i++)

// g++ -Wall -std=c++17 nombre_del_archivo.cpp -o nombre_del_ejecutable
// https://codeforces.com/contest/112/problem/A
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string str1, str2;
    cin >> str1 >> str2;

    for(char& c: str1){
        c = tolower(c);
    }
    
    for(char& c: str2){
        c = tolower(c);
    }

    bool draw = true;
    bool bigger;
    for(ull i = 0; draw && i < str1.length(); i++){
        if(str1[i] > str2[i]){
            draw = false;
            bigger = true;
        }
        else if(str2[i] > str1[i]){
            draw = false;
            bigger = false;
        }
    }

    if(draw){
        cout << 0 << endl;
    }
    else{
        if(bigger){
            cout << 1 << endl;
        }
        else{
            cout << -1 << endl;
        }
    }

    }