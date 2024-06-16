#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

#define fore(i, a, b) for (ull i = a; i < (b); i++)

int main() {
  ios::sync_with_stdio(false), cin.tie(nullptr);

  string s, t;
  cin >> s >> t;

  for (char& c : s) {
    c = tolower(c);
  }
  for (char& c : t) {
    c = tolower(c);
  }

  string a = min(s, t);

  cout << a << '\n';

}

/*

El < de los string es el orden lexicográfico:

Si s y t son string
  s < t sii s es prefijo propio de t o en la primera posición i en la que difieren s[i] < t[i]

*/