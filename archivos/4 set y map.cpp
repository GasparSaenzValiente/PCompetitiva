#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

#define fore(i, a, b) for (ull i = a; i < (b); i++)

int main() {
  ios::sync_with_stdio(false), cin.tie(nullptr);

  // Conjunto
  set<ll> s;

  s.insert(4);

  ll tam = s.size();

  s.erase(4);


  // Para obtener menor elemento que es mayor o igual que 3
  auto x = s.lower_bound(3);

  if (x == s.end()) {
    // En este caso no hay

  } else {
    // En este caso si hay y lo podemos obtener así
    ll y = *x;
  }


  // Obtener el elemento mas chico y mas grande de un set (el set tiene que ser o vacío)
  assert(!s.empty());
  ll chico = *s.begin();
  ll grande = *s.rbegin();


  // Recorrer todos los elementos de un set
  for (ll x : s) {

  }


  // Un map es un diccionario
  map<ll, ll> m;

  m[10] = 5;
  m[8] = 4;

  cout << m[8];

  for (auto [k, v] : m) {

  }

  // count sirve para saber si un elemento esta como calve el map
  if (m.count(8)) {
    m.erase(8);
  }

}
