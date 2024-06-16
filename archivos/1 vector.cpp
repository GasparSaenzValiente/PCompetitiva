#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

#define fore(i, a, b) for (ull i = a; i < (b); i++)

// Esto es el <
bool cmp(ll a, ll b) {
  return abs(a) < abs(b);
}

int main() {
  ios::sync_with_stdio(false), cin.tie(nullptr);

  ll n;
  cin >> n;
  vector<ll> v(n);

  // Leer un vector
  /* fore(i, 0, n) {
    cin >> v[i];
  } */
  // Otra forma de leer un vector
  for(ll& x : v) {
    cin >> x;
  }

  // Agregar un elemento al final del vector
  v.push_back(4);

  // Eliminar el último elemento del vector
  v.pop_back();

  // Tamaño del vector
  ll tam = v.size();

  // Ordenar el vector en O(n log n)
  sort(v.begin(), v.end(), cmp);

  // Dar vuelta el vector
  reverse(v.begin(), v.end());

  // Iterar por todos los elementos de un vector
  for (ll x : v) {
    cout << x << ' ';
  }

  // deque permite agregar y eliminar tanto del principio como del final
  deque<ll> d;

  d.push_back(5);
  d.push_front(4);
  d.pop_back();
  d.pop_front();


  // Un par de dos elementos, útil para hacer un vector de pares
  pair<ll, ll> p;
  cin >> p.first >> p.second;

}
