#include <bits/stdc++.h>
using namespace std;

int main() {
    // Hacer que la entrada/salida sea más rápida
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, k;
    // Leer los valores de n y k
    cin >> n >> k;

    // Declarar el vector para almacenar las alturas de las tablas
    vector<int> fence(n);
    // Leer las alturas de las tablas
    for (auto& i : fence) {
        cin >> i;
    }

    // Declarar un vector para almacenar las sumas parciales
    vector<int> psums(n + 1);
    psums[0] = 0; // La primera suma parcial es 0

    // Calcular las sumas parciales
    for (int i = 0; i < n; ++i) {
        psums[i + 1] = psums[i] + fence[i];
    }

    // Inicializar las variables para encontrar el segmento con la suma mínima
    int res = 0, cmp = psums[k];

    // Iterar desde el k-ésimo elemento hasta el final
    for (int i = k; i < n + 1; ++i) {
        // Calcular la suma del segmento actual de k elementos
        if (psums[i] - psums[i - k] < cmp) {
            // Si la suma actual es menor que la mínima encontrada, actualizar
            cmp = psums[i] - psums[i - k];
            res = i - k;
        }
    }

    // Imprimir la posición del primer elemento del segmento con la suma mínima (ajustado a 1-indexado)
    cout << ++res << '\n';

    return 0;
}


/*
fence:   [ 2, 1, 3, 1, 2, 1, 1 ]
psums:   [ 0, 2, 3, 6, 7, 9, 10, 11 ]
segment sums:
  [2, 1, 3] -> 6
  [1, 3, 1] -> 5
  [3, 1, 2] -> 6
  [1, 2, 1] -> 4
  [2, 1, 1] -> 4

min sum segment: [1, 2, 1] starting at position 4
*/
