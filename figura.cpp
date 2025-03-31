#include <iostream>

using namespace std;

int main() {
    int N, f;
    
    cout << "¿Cuántos vértices quieres? ";
    cin >> N;
    
    cout << "¿Cuántas caras quieres unir? ";
    cin >> f;

    int tablero[100][3];

    for (int i = 0; i < N; i++) {
        cout << "x en el vértice " << i + 1 << ": ";
        cin >> tablero[i][0];
        cout << "y en el vértice " << i + 1 << ": ";
        cin >> tablero[i][1];
        cout << "z en el vértice " << i + 1 << ": ";
        cin >> tablero[i][2];
    }

    
    int caras[100][100];
    int tamaños[100];
    
    for (int i = 0; i < f; i++) {
        cout << "¿Cuántos vértices tiene la cara " << i + 1 << "? ";
        cin >> tamaños [i];

        cout << "Ingrese los índices de los vértices para la cara " << i + 1 << " separados por espacios: ";
        for (int j = 0; j < tamaños[i]; j++) {
            cin >> caras[i][j];
        }
    }

    
    for (int i = 0; i < N; i++) {
        cout << "v " << tablero[i][0] << " " << tablero[i][1] << " " << tablero[i][2] << endl;
    }

   
    for (int i = 0; i < f; i++) {
        cout << "f ";
        for (int j = 0; j < tamaños[i]; j++) {
            cout << caras[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
