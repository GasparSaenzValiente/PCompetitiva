#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define fore(i, a, b) for(ull i = a; i < b; i++)

// https://codeforces.com/contest/433/problem/B

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    ull n;
    cin >> n;
    vector<int> stones(n);

    for(auto& i : stones) {
        cin >> i;
    }

    vector<ll> psums(n + 1);
    psums[0] = 0;
    fore(i, 0, n) {
        psums[i + 1] = psums[i] + stones[i];
    }

    vector<int> stones_in_asc_order = stones;
    sort(stones_in_asc_order.begin(), stones_in_asc_order.end());

    vector<ll> psums_in_order(n + 1);
    psums_in_order[0] = 0;
    fore(i, 0, n) {
        psums_in_order[i+1] = psums_in_order[i] + stones_in_asc_order[i];
    }

    ull m;
    cin >> m;

    fore(i, 0, m) {
        ull type, l, r;
        cin >> type >> l >> r;

        if (type == 1) {
            // Calcula la suma de stones[l] a stones[r-1]
            cout << (psums[r] - psums[l-1]) << endl;
        } else {
            // Calcula la suma de stones_in_asc_order[l] a stones_in_asc_order[r-1]
            cout << (psums_in_order[r] - psums_in_order[l-1]) << endl;
        }
    }

    return 0;
}
